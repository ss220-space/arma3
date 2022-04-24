// Простой скрипт-костыль на удаления "дисбалансных" предметов. Применяется временно до переработки лодаутов - Shield

[] spawn {
	while {true} do {
		// Удаление химсвета и ПНВ у игроков
		{_x removeMagazines "Chemlight_red";_x removeMagazines "Chemlight_green";_x removeItems "rhs_1PN138";_x removeItems "rhsusf_ANPVS_14";} forEach allUnits;
		sleep 2;
		// Удаление "бэрретов" и ТВС у игроков
  		if (primaryWeapon player == "rhs_weap_M107") then {hint "Я запрещаю вам Баррет"; removeAllWeapons player;};
		if (primaryWeapon player == "rhs_weap_M107_w") then {hint "Я запрещаю вам Баррет"; removeAllWeapons player;};
		if (primaryWeapon player == "rhs_weap_M107_d") then {hint "Я запрещаю вам Баррет"; removeAllWeapons player;};
		{_x removeWeapon "rhs_weap_M107";_x removeWeapon "rhs_weap_M107_w";_x removeWeapon "rhs_weap_M107_d";_x removeItems "rhsusf_acc_anpas13gv1";_x removeItems "optic_tws";_x removeItems "optic_tws_mg";} forEach allUnits;
		sleep 1;
	};
};


/*
// Удаляем
"rhs_weap_M107", "rhs_weap_M107_w", "rhs_weap_M107_d", "rhsusf_acc_anpas13gv1"

Ящик rhsusf_weapon_crate
*\