params ["_unit"];

private _playerIdx = ([SS220_var_playersArray, (getPlayerUID _unit)] call BIS_fnc_findInPairs);

if (side _unit == sideLogic) exitWith {};

if  (_playerIdx == -1) then {
    [SS220_var_playersArray, (getPlayerUID _unit), (str side _unit)] call BIS_fnc_addToPairs;
    diag_log format ["[SS_DEBUG] %1 connected, not in playersArray - added, new list is: %2", (getPlayerUID _unit), SS220_var_playersArray];
} else {
    private _playerSide = ((SS220_var_playersArray select _playerIdx) select 1);
	diag_log format ["[SS_DEBUG] %1 connected, in playersArray - checking if %2 equals %3", (getPlayerUID _unit), _playerSide, (str side _unit)];
    
    if !(_playerSide isEqualTo (str side _unit)) then {
        ['teamSwitchNotAllowed', false, 0.1, false] remoteExecCall ['BIS_fnc_endMission', remoteExecutedOwner];
		diag_log format ["[SS_DEBUG] %1 != %2, get kicked, %3!", _playerSide, (str side _unit), (getPlayerUID _unit)];
    } else {
        diag_log format ["[SS_DEBUG] %1 == %2, %3 lives!", _playerSide, (str side _unit), (getPlayerUID _unit)];
    };
};