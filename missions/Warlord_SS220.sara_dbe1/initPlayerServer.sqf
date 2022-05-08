/* Отключено в связи с несовместимостью с ванильным Warlords 
// Американские лодауты - Arlord, Shield
[west,"rifleman_us"] call BIS_fnc_addRespawnInventory;
[west,"sniper_us"] call BIS_fnc_addRespawnInventory;
[west,"at_us"] call BIS_fnc_addRespawnInventory;
[west,"mg_us"] call BIS_fnc_addRespawnInventory;
[west,"medic_us"] call BIS_fnc_addRespawnInventory;
[west,"aa_us"] call BIS_fnc_addRespawnInventory;
[west,"eng_us"] call BIS_fnc_addRespawnInventory;
[west,"gren_us"] call BIS_fnc_addRespawnInventory;
[west,"co_us"] call BIS_fnc_addRespawnInventory;

// Русские лодауты - Arlord, Shield
[east,"rifleman_ru"] call BIS_fnc_addRespawnInventory;
[east,"sniper_ru"] call BIS_fnc_addRespawnInventory;
[east,"mg_ru"] call BIS_fnc_addRespawnInventory;
[east,"medic_ru"] call BIS_fnc_addRespawnInventory;
[east,"eng_ru"] call BIS_fnc_addRespawnInventory;
[east,"at_ru"] call BIS_fnc_addRespawnInventory;
[east,"aa_ru"] call BIS_fnc_addRespawnInventory;
[east,"gren_ru"] call BIS_fnc_addRespawnInventory;
[east,"co_ru"] call BIS_fnc_addRespawnInventory;
*/
// Переасигн кураторов чтобы не было ошибки "черного экрана" - Shield
{
	if (!isnull (getassignedcuratorunit _x)) then {
		_unit = getassignedcuratorunit _x;
		if (isnull (getassignedcuratorlogic _unit)) then {
			sleep 5;
			unassignCurator _x;
			sleep 1;
			_unit assignCurator _x;
			if (isClass (configFile >> "CfgPatches" >> "task_force_radio")) then {
				_unit call TFAR_fnc_isForcedCurator;
			};
		};
	};
} foreach allcurators;