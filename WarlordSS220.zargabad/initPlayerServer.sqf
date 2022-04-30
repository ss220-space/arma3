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