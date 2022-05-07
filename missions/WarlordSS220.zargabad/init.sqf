// Погодные эффекты - Shield 
[random 1, 0, 0.2 + random 0.8, -0.75 + random 1.5] execVM "weather\tort_overcast.sqf";
[random 1, selectrandom [0, random 0.2], 0.2 + random 0.8, -0.75 + random 1.5, random 0.75, 0.7 + random [0,0,0.3]] execVM "weather\tort_rain.sqf";
[random [0,0,0.4], selectrandom [0,0,random 0.2], 0.2 + random 0.2, -0.75 + random 1.5, random 0.75] execVM "weather\tort_fog.sqf";
[random [0,0,10], 0, random 15, -0.75 + random 1.5, random 0.75, random 0.5] execVM "weather\tort_wind.sqf";

// Проверка резервных слотов - Shield
[] execVM "scripts\reserved.sqf";

// Запуск скрипта на удаления ПНВ и тепловизоров. Временный костыль пока не будут разработаны новые лодауты - Shield
[] execVM "scripts\remover.sqf";

// Удаление мусора с баз - Shield 
[] execVM "scripts\garbage.sqf";

// Отображение меток только для одной стороны - Shield
[] spawn {
    while { !isDedicated } do {
        waitUntil { sleep 1; alive player};
        {
            _arr = _x splitString "_";
            _pre = _arr select 0;
            if (_pre in ["WEST","EAST","GUER","CIV"]) then {
                if (format["%1",side player] == _pre) then {
                    _x setMarkerAlphaLocal 1;
                } else {
                    _x setMarkerAlphaLocal 0;
                };
            };
            
        } count allMapMarkers;
    };
};