// Инициализация локальных параметров на стороне игрока при подключении
// Даем 500 очков каждому новому игроку - Shield
player setVariable ["BIS_WL_funds", 500];
// Классы для Американцев - Arlord
private _typeOfPlayer = typeOf player;
switch _typeOfPlayer do {
case "rhsusf_army_ocp_arb_rifleman" : {
[player,"p1_eng"] call BIS_fnc_addRespawnInventory;
[player,"p2_mgunner"] call BIS_fnc_addRespawnInventory;
[player,"p4_at"] call BIS_fnc_addRespawnInventory;
[player,"p5_mg"] call BIS_fnc_addRespawnInventory;
[player,"p6_mg"] call BIS_fnc_addRespawnInventory;
[player,"p7_mg"] call BIS_fnc_addRespawnInventory;
[player,"p8_mg"] call BIS_fnc_addRespawnInventory;
[player,"p9_mg"] call BIS_fnc_addRespawnInventory;
[player,"p10_mg"] call BIS_fnc_addRespawnInventory;
};
case "rhsusf_army_ocp_arb_rifleman" : {
[player,"p3_recon"] call BIS_fnc_addRespawnInventory;
};
};
// Классы для Русских - Arlord
private _typeOfPlayer = typeOf player;
switch _typeOfPlayer do {
case "rhs_vdv_des_rifleman" : {
[player,"p11_eng"] call BIS_fnc_addRespawnInventory;
[player,"p12_eng"] call BIS_fnc_addRespawnInventory;
[player,"p13_eng"] call BIS_fnc_addRespawnInventory;
[player,"p14_eng"] call BIS_fnc_addRespawnInventory;
[player,"p15_eng"] call BIS_fnc_addRespawnInventory;
[player,"p16_eng"] call BIS_fnc_addRespawnInventory;
[player,"p17_eng"] call BIS_fnc_addRespawnInventory;
[player,"p18_eng"] call BIS_fnc_addRespawnInventory;
[player,"p19_eng"] call BIS_fnc_addRespawnInventory;
};
case "rhs_vdv_des_rifleman" : {
[player,"p3_recon"] call BIS_fnc_addRespawnInventory;
};
};
