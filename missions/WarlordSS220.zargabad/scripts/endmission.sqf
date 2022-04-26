// Проигрывает музыку и завершает миссиию при вызове - Shield 

//Включаем ArmA 3 Win (Stage C)
["LeadTrack06_F_EPC",0,0.7] call BIS_fnc_playMusic;

//Первый такт - отмена заданий
sleep 15;
["BIS_task_01","CANCELED"] call BIS_fnc_taskSetState;
