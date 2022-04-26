if !(isServer) exitWith {};

params [
	["_entitiesToFind", [], [[]]],
	["_itemsToBlock", [], [[]]]
];

{
	private _tempEntity = _x;
	private _tempWeaponsArray = getWeaponCargo _x;
	private _tempItemsArray = getItemCargo _x;
	clearWeaponCargoGlobal _x;
	clearItemCargoGlobal _x;
	
	{
		for "_i" from 0 to count _tempWeaponsArray do {
			(_tempWeaponsArray select 0) deleteAt ((_tempWeaponsArray select 0) find _x);
			(_tempWeaponsArray select 1) deleteAt ((_tempWeaponsArray select 0) find _x);
		};
		//дебаг systemChat "пушки уничтожены нахуй";
	} forEach _itemsToBlock;
	
	{
		for "_i" from 0 to count _tempItemsArray do {
			(_tempItemsArray select 0) deleteAt ((_tempItemsArray select 0) find _x);
			(_tempItemsArray select 1) deleteAt ((_tempItemsArray select 0) find _x);
		};
	} forEach _itemsToBlock;

	{
		_tempEntity addWeaponCargoGlobal [_x, _tempWeaponsArray select 1 select _forEachIndex];
	} forEach (_tempWeaponsArray select 0);

	{
		_tempEntity addItemCargoGlobal [_x, _tempItemsArray select 1 select _forEachIndex];
	} forEach (_tempItemsArray select 0);

} forEach entities [_entitiesToFind, [], false, true];