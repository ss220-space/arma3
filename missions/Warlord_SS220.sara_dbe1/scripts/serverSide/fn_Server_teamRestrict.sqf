params ["_unit"];

if (side _unit == sideLogic) exitWith {};

private _playerInSides = ([SS220_var_sidesArray, (getPlayerUID _unit)] call BIS_fnc_findInPairs);
private _playerPoints = ([SS220_var_playerPointsArray, (getPlayerUID _unit)] call BIS_fnc_findInPairs);

if  (_playerInSides == -1) then {
    [SS220_var_sidesArray, (getPlayerUID _unit), (str side _unit)] call BIS_fnc_addToPairs;
} else {
    private _playerSide = ((SS220_var_sidesArray select _playerInSides) select 1);
   
    if !(_playerSide isEqualTo (str side _unit)) then {
        ['teamSwitchNotAllowed', false, 0.1, false] remoteExecCall ['BIS_fnc_endMission', remoteExecutedOwner];
    };
};

//удалил дебаг, поменял название массива