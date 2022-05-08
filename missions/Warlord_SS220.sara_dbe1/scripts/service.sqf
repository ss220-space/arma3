private ["_object", "_time", "_magazines","_cmagazines"];

_object = _this select 0;
_type = typeof _object;
_time = 10;
_cmagazines = _object magazinesTurret[0];
x_reload_time_factor = 10;

_object vehicleChat "Проводится обслуживание. Не двигайтесь!";
sleep _time;
if (isEngineOn _object) exitwith {_object vehicleChat "Service Cancelled"};
_object vehicleChat "Идет ремонт...";
sleep _time;
if (isEngineOn _object) exitwith {_object vehicleChat "Service Cancelled"};
_object setDamage 0;
_object vehicleChat "Идет перезарядка...";
_magazines = getArray(configFile >> "CfgVehicles" >> _type >> "magazines");

if (count _magazines > 0) then {
_removed = [];
{
	if (!(_x in _removed)) then {
		_object removeMagazines _x;
		_removed set [count _removed, _x];
	};
} forEach _magazines;
{
	//if (!isDedicated) then {[_object, format ["Перезарядка %1", _x]] call XfVehicleChat};
	sleep x_reload_time_factor;
	if (!alive _object) exitWith {};
	_object addMagazine _x;
} forEach _magazines;
};

_turrets = [configFile >> "CfgVehicles" >> _type >> "Turrets"] call BIS_fnc_returnVehicleTurrets;

_reloadTurrets = {
private ["_turrets", "_path"];
_turrets = _this select 0;
_path = _this select 1;

private ["_i"];
_i = 0;
while {_i < (count _turrets)} do {
	private ["_turretIndex", "_thisTurret"];
	_turretIndex = _turrets select _i;
	_thisTurret = _path + [_turretIndex];

	_magazines = _object magazinesTurret _thisTurret;
	if (!alive _object) exitWith {};
	_removed = [];
	{
		if (!(_x in _removed)) then {
			_object removeMagazinesTurret [_x, _thisTurret];
			_removed set [count _removed, _x];
		};
	} forEach _magazines;
	if (!alive _object) exitWith {};
	{
		sleep x_reload_time_factor;
		if (!alive _object) exitWith {};
		_object addMagazineTurret [_x, _thisTurret];
		sleep x_reload_time_factor;
		if (!alive _object) exitWith {};
	} forEach _magazines;

	if (!alive _object) exitWith {};

	[_turrets select (_i + 1), _thisTurret] call _reloadTurrets;
	_i = _i + 2;
	if (!alive _object) exitWith {};
};
};

[_turrets, []] call _reloadTurrets;

if (!alive _object) exitWith {};

{_object addMagazineTurret [_x,[0]];} forEach _magazines;
sleep _time;
if (isEngineOn _object) exitwith {_object vehicleChat "Обслуживание отменено!"};
_object vehicleChat "Заправляем...";
sleep _time;
if (isEngineOn _object) exitwith {_object vehicleChat "Обслуживание отменено!"};
_object setFuel 1;
_object vehicleChat "Обслуживание завершено!";

if (true) exitwith { };