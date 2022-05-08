SS220_var_sidesArray = [];
SS220_var_playerPointsArray = [];

//Сохранение очков игрока при выходе
addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	[SS220_var_playerPointsArray, _uid, (_unit getVariable "BIS_WL_funds")] сall BIS_fnc_addToPairs;
	
	false; //If this EH code returns true, the unit, previously occupied by player, gets transferred to the server, becomes AI and continues to live
}];