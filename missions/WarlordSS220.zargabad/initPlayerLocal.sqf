params ["_playerUnit", "_didJIP"];
// Инициализация локальных параметров на стороне игрока при подключении

//Отключаем AI функции игровому юниту - Shield 
player disableAI "AUTOTARGET";
player disableAI "RADIOPROTOCOL";

// Проверка баланса команд. Относительность BLUFOR/OPFOR 1:2 - Shield
//if ( ( west countSide allPlayers < 1) or ( east countSide allPlayers < 1) ) exitWith {};

// Даем 500 очков каждому новому игроку - Shield
if !(_didJIP) then 
{
sleep 10;
player setVariable ["BIS_WL_funds", 500, true];
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