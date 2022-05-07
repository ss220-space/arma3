if !(isDedicated) exitWith {};// нехуй на клиент вешать бесполезный бесконечный луп

[] spawn {
	while { true } do {
		// а зачем вообще тут нужно было это все если и так есть луп на удаление всех этих предметов тупо у всех юнитов?
		{
			_x removeWeapon "rhs_weap_M107";
			_x removeWeapon "rhs_weap_M107_w";
			_x removeWeapon "rhs_weap_M107_d";
			_x removeItems "rhsusf_acc_anpas13gv1";
			_x removePrimaryWeaponItem "rhsusf_acc_anpas13gv1";
			_x removeItems "optic_tws";
			_x removePrimaryWeaponItem "optic_tws";
			_x removeItems "optic_tws_mg";
			_x removePrimaryWeaponItem "optic_tws_mg";
			_x removeMagazines "Chemlight_red";
			_x removeMagazines "Chemlight_green";
			_x removeItems "rhs_1PN138";
			_x unlinkItem "rhs_1PN138";
			_x removeItems "rhsusf_ANPVS_14";
			_x unlinkItem "rhsusf_ANPVS_14";
		} forEach allUnits;

		sleep 10;
	};
};