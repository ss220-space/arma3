[] spawn {
	while { true } do {
		// Удаление химсвета и ПНВ у игроков
		{
			_x removeMagazines "Chemlight_red";
			_x removeMagazines "Chemlight_green";_x removeItems "rhs_1PN138";_x removeItems "rhsusf_ANPVS_14";
		} forEach allUnits;
		sleep 5;
		// Удаление "бэрретов" и ТВС у игроков
		if (primaryWeapon player isEqualTo "rhs_weap_M107") then {
			hintSilent "Я запрещаю вам Баррет";
			removeAllWeapons player;
		};
		if (primaryWeapon player isEqualTo "rhs_weap_M107_w") then {
			hintSilent "Я запрещаю вам Баррет";
			removeAllWeapons player;
		};
		if (primaryWeapon player isEqualTo "rhs_weap_M107_d") then {
			hintSilent "Я запрещаю вам Баррет";
			removeAllWeapons player;
		};
		{
			_x removeWeapon "rhs_weap_M107";
			_x removeWeapon "rhs_weap_M107_w";_x removeWeapon "rhs_weap_M107_d";_x removeItems "rhsusf_acc_anpas13gv1";_x removeItems "optic_tws";_x removeItems "optic_tws_mg";
		} forEach allUnits;
		sleep 5;
	};
};