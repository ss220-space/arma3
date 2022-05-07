params ["_playerUnit", "_didJIP"];
// Инициализация локальных параметров на стороне игрока при подключении

//Отключаем AI функции игровому юниту - Shield 
player disableAI "AUTOTARGET";
player disableAI "RADIOPROTOCOL";

// Проверка баланса команд. Относительность BLUFOR/OPFOR 1:2 - Shield
//if ( ( west countSide allPlayers < 1) or ( east countSide allPlayers < 1) ) exitWith {};

//С клиента запрос на сервер для функции запрета входа в другую команду - Kotyara
[player] remoteExec ["SS_fnc_Server_teamRestrict", 2];

["ace_killed", {
    if (_this select 0 == player) then {
        ["unconscious", false] call ace_common_fnc_setDisableUserInputStatus;
    };
}] call CBA_fnc_addEventHandler;

// Даем 500 очков каждому новому игроку - Shield
if !(_didJIP) then 
{
    sleep 10;
    player setVariable ["BIS_WL_funds", 500, true];
    [SS220_var_sidesArray, (getPlayerUID _unit), 500] call BIS_fnc_addToPairs;
} else {
    private _playerInPoints = ([SS220_var_playerPointsArray, (getPlayerUID _unit)] call BIS_fnc_findInPairs);
    
    if (_playerInPoints isEqualTo -1) then {
        private _playerPoints = ((SS220_var_playerPointsArray select _playerInPoints) select 1);
        player setVariable ["BIS_WL_funds", _playerPoints, true];
    };
};

while { true } do {
    sleep 600;
    [SS220_var_sidesArray, (getPlayerUID _unit), (player getVariable "BIS_WL_funds")] call BIS_fnc_addToPairs;
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
if (hasInterface) then
{
    //Сон перед первым запуском. Чтобы прошло интро и некоторое время после
    sleep 700;
    execVM "Music\musicHandler.sqf";
};

