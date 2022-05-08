[
	//_setting     - Unique setting name. Matches resulting variable name <STRING>
	"outlw_MR_bulletTime",
	
	//_settingType - Type of setting. Can be "CHECKBOX", "EDITBOX", "LIST", "SLIDER" or "COLOR" <STRING>
	"SLIDER",
	
	//_title       - Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
	[
		"Время перепаковки",
		"Время на отдельный патрон."
	],
	
	//_category    - Category for the settings menu + optional sub-category <STRING, ARRAY>
	"Mag Repack",
	
	//_valueInfo   - Extra properties of the setting depending of _settingType. See examples below <ANY>
	// SLIDER --- extra arguments: [_min, _max, _default, _trailingDecimals, _isPercentage]
	[0.1, 2, 0.8, 1],
	
	//isGlobal    - 1: all clients share the same setting, 2: setting can't be overwritten (optional, default: 0) <ARRAY>
	0,
	
	//_script      - Script to execute when setting is changed. (optional) <CODE>
	{},
	
	//_needRestart - Setting will be marked as needing mission restart after being changed. (optional, default false) <BOOL>
	true
] call CBA_fnc_addSetting;

[
	"outlw_MR_beltTime",
	"SLIDER",
	["Время на ленту", "Время затрачиваемое на перепаковку лент."],
	"Mag Repack",
	[0.1, 10, 4, 1],
	0
] call CBA_fnc_addSetting;

[
	"outlw_MR_debugMode",
	"CHECKBOX",
	["Режим дебага", "Отметьте чтобы включить дебаг системы."],
	"Mag Repack",
	false,
	0
] call CBA_fnc_addSetting;

/*
Parameters:
    _addon          - Name of the registering mod + optional sub-category <STRING, ARRAY>
    _action         - Id of the key action. <STRING>
    _title          - Pretty name, or an array of pretty name and tooltip <STRING>
    _downCode       - Code for down event, empty string for no code. <CODE>
    _upCode         - Code for up event, empty string for no code. <CODE>
Optional:
    _defaultKeybind - The keybinding data in the format [DIK, [shift, ctrl, alt]] <ARRAY>
    _holdKey        - Will the key fire every frame while down <BOOLEAN>
    _holdDelay      - How long after keydown will the key event fire, in seconds. <NUMBER>
    _overwrite      - Overwrite any previously stored default keybind <BOOLEAN>
*/

        // Register a simple keypress to an action
        #include "\a3\ui_f\hpp\defineDIKCodes.inc"
		
        ["Mag Repack", "outlw_fnc_key_var", ["Open menu", "Open Mag Repack menu"], {_this call outlw_MR_keyDown}, {}, [DIK_R, [false, true, false]]] call CBA_fnc_addKeybind;

if (!isDedicated || !hasInterface) then {outlw_magRepack_Var = execVM "scripts\MagRepack_init.sqf";} else {};