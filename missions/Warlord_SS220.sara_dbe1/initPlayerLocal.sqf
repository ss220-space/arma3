params ["_playerUnit", "_didJIP"];
// Инициализация локальных параметров на стороне игрока при подключении

//Отключаем AI функции игровому юниту - Shield 
player disableAI "AUTOTARGET";
player disableAI "RADIOPROTOCOL";

// Проверка баланса команд. Относительность BLUFOR/OPFOR 1:2 - Shield
//if ( ( west countSide allPlayers < 1) or ( east countSide allPlayers < 1) ) exitWith {};
//С клиента запрос на сервер для функции запрета входа в другую команду - Kotyara
[player] remoteExec ["SS_fnc_Server_teamRestrict", 2];

//Поставил после запроса, чтобы чела выкидывало ДО выдачи очков - зачем лишние просчеты
sleep 15;
waitUntil { ((hasInterface) && ((player getVariable "BIS_WL_funds")) >= 50)};

["ace_killed", {
    if (_this select 0 isEqualTo player) then {//Поменял == на isEqualTo, потому что isEqualTo быстрее (isEqualTo is a binary comparison. Therefor it is very fast but only accepts 100% identical matches. In some other languages this is known as "===" instead of "==")
        ["unconscious", false] call ace_common_fnc_setDisableUserInputStatus;
    };
}] call CBA_fnc_addEventHandler;

// Даем 500 очков каждому новому игроку - Shield
private _pointsArray = [missionNamespace, "SS220_var_playerPointsArray", "pizdets"] call BIS_fnc_getServerVariable;

if (_pointsArray isEqualTo "pizdets") then {
    hintSilent format ["Игрок %1 не смог получить массив SS220_var_playerPointsArray с сервера", player];
    diag_log format ["Игрок %1 не смог получить массив SS220_var_playerPointsArray с сервера", player];
    [format ["Игрок %1 не смог получить массив SS220_var_playerPointsArray с сервера", player]] remoteExec ["diag_log", 2];
    breakTo "henshinEmergence"; //Прыгаем в аварийный скоуп, избегая ошибок
};

private _playerInPoints = [_pointsArray, (getPlayerUID _playerUnit)] call BIS_fnc_findInPairs;

if (_playerInPoints isEqualTo -1) then {
        player setVariable ["BIS_WL_funds", 500, true];
        [SS220_var_playerPointsArray, (getPlayerUID _playerUnit), 500] remoteExecCall ["BIS_fnc_addToPairs", 2];
    } else {
        private _playerPoints = ((_pointsArray select _playerInPoints) select 1);
        player setVariable ["BIS_WL_funds", _playerPoints, true];
    };

//Скоуп для того чтобы не засирать РПТ игрока ошибками и избежать ошибки что у него не будет очков - выдаем 500 и отправляем запрос на добавление в массив очков
[] spawn = {
    scopeName "henshinEmergence";
    player setVariable ["BIS_WL_funds", 500, true];
    [SS220_var_playerPointsArray, (getPlayerUID _playerUnit), (player getVariable "BIS_WL_funds")] remoteExecCall ["BIS_fnc_addToPairs", 2];
};

while { true } do {
    sleep 600;
    [SS220_var_playerPointsArray, (getPlayerUID _playerUnit), (player getVariable "BIS_WL_funds")] remoteExecCall ["BIS_fnc_addToPairs", 2];
};

// Проверка баланса команд. Относительность BLUFOR/OPFOR 1:2 - Shield
/*
if ( ( west countSide allPlayers > (east countSide allPlayers)+2) or ( east countSide allPlayers > (west countSide allPlayers)+1) ) then {

   player enableSimulation false;
   ["<t color='#ff0000' size = '.8'>Warning!<br />КОМАНДЫ НЕ СБАЛАНСИРОВАНЫ, BLUFOR/OPFOR БАЛАНС 1:2, СМЕНИТЕ КОМАНДУ!</t>",-1,-1,10,1,0] spawn BIS_fnc_dynamicText;
   uisleep 10;
   ["END6",false,10] call BIS_fnc_endMission;
};
*/

//Запуск модуля динамической музыки - Shield
//Сон перед первым запуском. Чтобы прошло интро и некоторое время после

//Убрал if (hasInterface) потому что это уже в waitUntil проверяется + выделил в отдельный тред чтобы не стопило весь скрипт - на будущее 
_musicHandle = [] spawn = { 
    sleep 700;
    execVM "Music\musicHandler.sqf";
};