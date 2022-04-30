params ["_newUnit", "_oldUnit", "_respawn", "_respawnDelay"];

//Указание класса при наличии определенного предмета при Respawn - Arlord
private _playerBackpackItems = items player; 

if ("ToolKit" in _playerBackpackItems) then { player setUnitTrait ["engineer",true,false]; player setUnitTrait ["explosiveSpecialist",true,false];} else { player setUnitTrait ["engineer",false,false]; player setUnitTrait ["explosiveSpecialist",false,false];}; 
if ("Medikit" in _playerBackpackItems) then {player setUnitTrait ["medic",true,false];} else {player setUnitTrait ["medic",false,false];};