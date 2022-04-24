// Укажите строчку ниже в ините слота чтобы пометить его как *Reserved*
//this setVariable ["reserved_unit","Yes it is",true]; this addEventHandler ["respawn", {(_this select 0) setVariable ["reserved_unit","Yes it is",true];}];
private ["_reserved_uids", "_uid", "_isReserved"];

if (!isDedicated) then // Не работает на сервер. Сервер должен иметь возможность захода на любой слот
{
   waitUntil {!isNull player};
   _isReserved = player getVariable "reserved_unit";
   if (!isNil "_isReserved") then  //Переменная игрока
   {
       waitUntil {_uid = getPlayerUID player; _uid != ""};

       _reserved_uids = ["76561198183789882", "76561198079385160", "76561198150250253"]; //укажите здесь список UID

       if (!(_uid in _reserved_uids)) then 
       {
           call BIS_fnc_VRFadeOut; 
           hint "Вы на резервном слоте! УНИЧТОЖИТЬ!";
           ["epicFail", false, 1] call BIS_fnc_endMission;
       } else 
       {   
           call BIS_fnc_VRFadeOut; 
           sleep 1;
           hint "Добро пожаловать!";
           sleep 5;
           call BIS_fnc_VRFadeIn;
       };

   };
};