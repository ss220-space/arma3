outlw_MR_version = "3.2.1";
outlw_MR_date = "24 апреля 2022";
outlw_MR_canCreateDialog = true;
outlw_MR_debugMode = profileNamespace getVariable ["outlw_MR_debugMode_profile", false];
outlw_MR_doHideFull = profileNamespace getVariable ["outlw_MR_doHideFull_profile", false];
if (isNil "outlw_Load_EH") then
{
	outlw_Load_EH = addMissionEventHandler ["Loaded",
	{
		execVM "Scripts\magrepack_init.sqf";
	}];
};
disableSerialization;
execVM "Scripts\MagRepack_Main.sqf";
execVM "Scripts\MagRepack_Misc.sqf";
waitUntil {!isNil "outlw_MR_getIDCs"};
outlw_MR_listIDCs = [missionConfigFile >> "MR_Dialog" >> "Controls"] call outlw_MR_getIDCs;