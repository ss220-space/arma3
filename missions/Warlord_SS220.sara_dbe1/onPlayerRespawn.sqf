params ["_newUnit", "_oldUnit", "_respawn", "_respawnDelay"];

//Указание класса при наличии определенного предмета при Respawn - Arlord
private _playerBackpackItems = items player; 

if ("ToolKit" in _playerBackpackItems) then { player setVariable ["ACE_IsEngineer",2,true];} else { player setVariable ["ACE_IsEngineer",0,true];}; 
if ("Medikit" in _playerBackpackItems) then {player setVariable ["ace_medical_medicclass", 2, true];} else {player setVariable ["ace_medical_medicclass", 0, true];};