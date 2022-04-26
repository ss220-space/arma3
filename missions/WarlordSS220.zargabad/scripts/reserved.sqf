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

       _reserved_uids = [
            "76561198183789882", // Azizonkg
            "76561198079385160", // RedokPaw
            "76561198150250253", // Shield
            "76561198153830828", // KIRrv
            "76561198138871417", // mooniverse
            "76561197988123858", // asmadey
            "76561198016958986", // Beastqt
            "76561198020335407", // sgtgrafoyni
            "76561198054780300", // cemka
            "76561198061984399", // BlackJokeR707 
            "76561198033161059", // PagyrA 
            "76561198003876146", // Wycc
            "76561198026770706", // AlCore
            "76561198038535198", // Bacardiy
            "76561197964172789" // Crimer
           ]; //укажите здесь список UID

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