//Удаляет мусор с баз каждые 1200 секунд.

//BLUFOR BASE
[] spawn {
    while {true} do {
        {if ([BLUTEAM, _x] call BIS_fnc_inTrigger) then {deleteVehicle _x};} forEach allDeadMen;
        {if (damage _x == 1 && ([BLUTEAM, _x] call BIS_fnc_inTrigger)) then { deleteVehicle _x};} forEach vehicles;
    sleep 1200;
    };
};

//OPFOR BASE
[] spawn {
    while {true} do {
        {if ([REDTEAM, _x] call BIS_fnc_inTrigger) then {deleteVehicle _x};} forEach allDeadMen;
        {if (damage _x == 1 && ([REDTEAM, _x] call BIS_fnc_inTrigger)) then { deleteVehicle _x};} forEach vehicles;
    sleep 1200;
    };
};