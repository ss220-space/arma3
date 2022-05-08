class CfgRespawnInventory
{
	class rifleman_us
	{
		displayName = "Стрелок";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Assault";

		weapons[] = {
			"rhs_weap_hk416d145_wd_grip3",
			"rhs_weap_m72a7"
		};

		magazines[] = { 
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag"
		};

		items[] = { 
			"FirstAidKit",
			"FirstAidKit"
		};

		linkedItems[] = { 
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"ACE_MapTools",
			"ACE_EarPlugs",
			"rhsusf_acc_SF3P556",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_kac_grip",
			"rhsusf_acc_RX01",
			"rhsusf_shemagh2_gogg_od",
			"UK3CB_AAF_B_H_PASGT_RHINO_DIGI_BRN",
			"UK3CB_TKA_B_V_GA_HEAVY_TAN"
		};

		uniformClass = "UK3CB_ADM_B_U_Tshirt_01_WDL_03";
	};

	class sniper_us 
	{
		displayName = "Снайпер";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
		role = "Recon";

		weapons[] = { 
			"rhs_weap_XM2010_wd",
			"rhsusf_bino_lrf_Vector21"
		};

		magazines[] = { 
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhs_mag_m67", 
			"rhs_mag_m67" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		}; 

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_MapTools",
			"ACE_EarPlugs",
			"ACE_RangeCard",
			"rhsusf_shemagh2_gogg_od", 
			"UK3CB_TKA_B_V_GA_HEAVY_TAN", 
			"UK3CB_AAF_B_H_PASGT_RHINO_DIGI_BRN", 
			"rhsusf_acc_harris_bipod", 
			"rhsusf_acc_LEUPOLDMK4" 
		};

		uniformClass = "UK3CB_CW_US_B_LATE_U_CombatUniform_Ghillie_01_WDL"; 
	};

	class at_us 
	{ 
		displayName = "Специалист АТ";
		role = "Support";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa"; 
		weapons[] = { 
			"rhs_weap_hk416d145_wd_grip3", 
			"rhs_weap_maaws" 
		};

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_maaws_HE", 
			"rhs_mag_maaws_HEDP", 
			"rhs_mag_maaws_HEAT", 
			"rhs_mag_m67", 
			"rhs_mag_m67" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"rhsusf_shemagh2_gogg_od",
			"UK3CB_TKA_B_V_GA_HEAVY_TAN",
			"UK3CB_AAF_B_H_PASGT_RHINO_DIGI_BRN",
			"rhsusf_acc_SF3P556",
			"rhsusf_acc_RX01",
			"rhsusf_acc_anpeq15side_bk",
			"rhs_optic_maaws",
			"rhsusf_acc_kac_grip"
		};

		uniformClass = "UK3CB_ADM_B_U_Tshirt_01_WDL_03"; 
		backpack = "UK3CB_B_Alice_Med_K"; 
	};

	class mg_us 
	{ 
		displayName = "Пулемётчик"; 
		icon = "iconManEXP";
		role = "Support";
		weapons[] = { 
			"UK3CB_MG3_Railed" 
		}; 

		magazines[] = { 
			"UK3CB_MG3_100rnd_762x51_WM", 
			"UK3CB_MG3_100rnd_762x51_WM", 
			"UK3CB_MG3_100rnd_762x51_WM", 
			"UK3CB_MG3_100rnd_762x51_WM", 
			"UK3CB_MG3_100rnd_762x51_WM", 
			"rhs_mag_m67", 
			"rhs_mag_m67" 
		}; 

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		}; 

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_MapTools",
			"ACE_EarPlugs",
			"ACE_SpareBarrel",
			"rhsusf_shemagh2_gogg_od",
			"UK3CB_TKA_B_V_GA_HEAVY_TAN",
			"UK3CB_AAF_B_H_PASGT_RHINO_DIGI_BRN",
			"rhsusf_acc_ACOG_MDO"
		}; 

		uniformClass = "rhs_uniform_cu_ocp_101st"; 
		backpack = "UK3CB_B_Alice_Med_K"; 
	};

	class medic_us 
	{ 
		displayName = "Медик"; 
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\support_ca.paa";
		role = "Support";

		weapons[] = { 
			"rhs_weap_hk416d145_wd_grip3" 
		};

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc", 
			"rhs_mag_m67", 
			"rhs_mag_m67" 
		};

		items[] = { 
			"Medikit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio",
			"ACE_MapTools",
			"ACE_EarPlugs",
			"ACE_surgicalKit",
			"ItemGPS",
			"rhsusf_shemagh2_gogg_od",
			"UK3CB_TKA_B_V_GA_HEAVY_TAN",
			"UK3CB_AAF_B_H_PASGT_RHINO_DIGI_BRN",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_RX01",
			"rhsusf_acc_SF3P556",
			"rhsusf_acc_kac_grip"
		};

		uniformClass = "UK3CB_ADM_B_U_Tshirt_01_WDL_03";
		backpack = "UK3CB_B_Alice_Med_K";
	};

	class aa_us 
	{ 
		displayName = "Специалист АА";
		icon = "iconMan";
		role = "Support";

		weapons[] = { 
			"rhs_weap_hk416d145_wd_grip3",
			"rhs_weap_fim92"
		};

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_fim92_mag", 
			"rhs_fim92_mag", 
			"rhs_mag_m67", 
			"rhs_mag_m67" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_MapTools",
			"ACE_EarPlugs", 
			"rhsusf_shemagh2_gogg_od", 
			"UK3CB_TKA_B_V_GA_HEAVY_TAN", 
			"UK3CB_AAF_B_H_PASGT_RHINO_DIGI_BRN", 
			"rhsusf_acc_SF3P556",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_RX01", 
			"rhsusf_acc_kac_grip" 
		};

		uniformClass = "UK3CB_ADM_B_U_Tshirt_01_WDL_03"; 
		backpack = "UK3CB_B_Alice_Med_K"; 
	};

	class eng_us 
	{ 
		displayName = "Инженер"; 
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; 
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_hk416d145_wd_grip3" 
		}; 

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_m67",
			"rhs_mag_m67" 
		}; 

		items[] = { 
			"ToolKit", 
			"FirstAidKit", 
			"FirstAidKit"
		}; 

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_EarPlugs",
			"ACE_Clacker",
			"ACE_Fortify",
			"ACE_DefusalKit",
			"ACE_Sandbag_empty",
			"ACE_MapTools",
			"ACE_EntrenchingTool",
			"ACE_IEDUrbanBig_Range",
			"ACE_IEDUrbanSmall_Range",
			"ACE_SLAMBottomMine",
			"rhsusf_mine_m14",
			"rhsusf_mine_m14", 
			"rhsusf_shemagh2_gogg_od", 
			"UK3CB_TKA_B_V_GA_HEAVY_TAN", 
			"UK3CB_AAF_B_H_PASGT_RHINO_DIGI_BRN", 
			"rhsusf_acc_SF3P556",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_RX01",
			"rhsusf_acc_kac_grip" 
		}; 

		uniformClass = "UK3CB_ADM_B_U_Tshirt_01_WDL_03"; 
		backpack = "UK3CB_B_Alice_Med_K"; 
	}; 

	class gren_us 
	{ 
		displayName = "Гранотомётчик"; 
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\assault_ca.paa";
		role = "Assault";

		weapons[] = { 
			"rhs_weap_hk416d145_m320" 
		};
		
		magazines[] = { 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_m67", 
			"rhs_mag_m67" 
		};

		items[] = { 
		"FirstAidKit", 
		"FirstAidKit"
		}; 

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_EarPlugs",
			"ACE_MapTools", 
			"rhsusf_shemagh2_gogg_od", 
			"UK3CB_TKA_B_V_GA_HEAVY_TAN", 
			"UK3CB_AAF_B_H_PASGT_RHINO_DIGI_BRN", 
			"rhsusf_acc_SF3P556",
			"rhsusf_acc_anpeq15side_bk",
			"rhsusf_acc_RX01",
		};

		uniformClass = "UK3CB_ADM_B_U_Tshirt_01_WDL_03"; 
		backpack = "UK3CB_B_Alice_Med_K"; 
	}; 

	class co_us 
	{ 
		displayName = "Командир";
		role = "Assault";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa";

		weapons[] = { 
			"rhs_weap_hk416d145_m320", 
			"Binocular" 
		};

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_30Rnd_556x45_Mk318_Stanag", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_M433_HEDP", 
			"rhs_mag_m67", 
			"rhs_mag_m67" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit"
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_MapTools",
			"ACE_EarPlugs",
			"rhsusf_shemagh2_gogg_od", 
			"UK3CB_TKA_B_V_GA_HEAVY_TAN", 
			"UK3CB_AAF_B_H_PASGT_RHINO_DIGI_BRN", 
			"rhsusf_acc_SF3P556",
			"rhsusf_acc_su230a",
			"rhsusf_acc_anpeq15side_bk" 
		};

		uniformClass = "UK3CB_ADM_B_U_Tshirt_01_WDL_03"; 
		backpack = "tf_anprc155_coyote";
	};

	class rifleman_ru 
		{ 
		displayName = "Стрелок";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Assault";
		
		weapons[] = { 
			"rhs_weap_savz58v_ris_grip3", 
			"rhs_weap_rpg75" 
		};

		magazines[] = { 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_rpg75_mag",
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"rhsgref_acc_zendl",
			"rhs_acc_perst3",
			"rhs_acc_grip_ffg2",
			"rhs_acc_rakursPM", 
			"rhs_6b47",
			"rhsusf_shemagh_gogg_grn",
			"UK3CB_TKA_O_V_6b23_ml_Oli_02" 
		};

		uniformClass = "UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK"; 
	};

	class sniper_ru 
	{ 
		displayName = "Снайпер";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
		role = "Recon";
	
		weapons[] = { 
			"rhs_weap_t5000" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000"
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_MapTools",
			"ACE_EarPlugs",
			"ACE_RangeCard",
			"rhs_pdu4", 
			"rhs_acc_harris_swivel",
			"rhs_acc_dh520x56",
			"UK3CB_TKA_O_V_6b23_ml_Oli_02",
			"rhsusf_shemagh_gogg_grn",
			"rhs_6b47"
		};

		uniformClass = "UK3CB_CW_SOV_O_Early_U_Sniper_Uniform_01_Ghillie_Top_KLMK"; 
	}; 

	class mg_ru 
	{ 
		displayName = "Пулемётчик"; 
		icon = "iconManEXP";
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_fnmag" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhsusf_100Rnd_762x51", 
			"rhsusf_100Rnd_762x51", 
			"rhsusf_100Rnd_762x51", 
			"rhsusf_100Rnd_762x51", 
			"rhsusf_100Rnd_762x51" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_SpareBarrel",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"rhsusf_acc_ELCAN",
			"rhsusf_shemagh_gogg_grn", 
			"UK3CB_TKA_O_V_6b23_ml_Oli_02", 
			"rhs_6b47" 
		}; 

		uniformClass = "UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK"; 
		backpack = "UK3CB_B_Tactical_Backpack"; 
	};

	class medic_ru 
	{ 
		displayName = "Медик"; 
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\support_ca.paa";
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_savz58v_ris_grip3" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58" 
		};

		items[] = { 
			"Medikit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio",
			"ACE_MapTools",
			"ACE_surgicalKit",
			"ACE_EarPlugs",
			"ItemGPS",
			"rhsgref_acc_zendl",
			"rhs_acc_perst3",
			"rhs_acc_rakursPM",
			"rhs_acc_grip_ffg2",
			"rhsusf_shemagh_gogg_grn",
			"UK3CB_TKA_O_V_6b23_ml_Oli_02",
			"rhs_6b47" 
		};

		uniformClass = "UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK"; 
		backpack = "rhs_medic_bag"; 
	}; 

	class eng_ru 
	{ 
		displayName = "Инженер"; 
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; 
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_savz58v_ris_grip3" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58" 
		};

		items[] = { 
			"FirstAidKit", 
			"ToolKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_EarPlugs",
			"ACE_Clacker",
			"ACE_MapTools",
			"ACE_Fortify",
			"ACE_DefusalKit",
			"ACE_EntrenchingTool",
			"ACE_IEDUrbanBig_Range",
			"ACE_IEDUrbanSmall_Range",
			"rhs_mine_tm62m",
			"rhs_mine_pmn2",
			"rhs_mine_pmn2",
			"rhsgref_acc_zendl",
			"rhs_acc_perst3",
			"rhs_acc_rakursPM",
			"rhs_acc_grip_ffg2",
			"rhsusf_shemagh_gogg_grn",
			"UK3CB_TKA_O_V_6b23_ml_Oli_02",
			"rhs_6b47"
		};

		uniformClass = "UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK"; 
		backpack = "UK3CB_B_Tactical_Backpack"; 
	};

	class at_ru 
	{ 
		displayName = "Специалист АТ";
		role = "Support";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa"; 
	
		weapons[] = { 
			"rhs_weap_savz58v_ris_grip3", 
			"rhs_weap_rpg7" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_rpg7_PG7VL_mag", 
			"rhs_rpg7_PG7VL_mag", 
			"rhs_rpg7_OG7V_mag", 
			"rhs_rpg7_OG7V_mag", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"rhsgref_acc_zendl",
			"rhs_acc_perst3",
			"rhs_acc_rakursPM",
			"rhs_acc_grip_ffg2",
			"rhsusf_shemagh_gogg_grn", 
			"rhs_acc_pgo7v2", 
			"UK3CB_TKA_O_V_6b23_ml_Oli_02", 
			"rhs_6b47" 
		};

		uniformClass = "UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK"; 
		backpack = "rhs_rpg_empty"; 
	};

	class aa_ru 
	{ 
		displayName = "Специалист АА"; 
		icon = "iconMan";
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_savz58v_ris_grip3", 
			"rhs_weap_igla" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_mag_9k38_rocket", 
			"rhs_mag_9k38_rocket", 
			"rhs_mag_9k38_rocket", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58", 
			"rhs_30Rnd_762x39mm_Savz58" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_MapTools",
			"ACE_EarPlugs",
			"rhsgref_acc_zendl",
			"rhs_acc_perst3",
			"rhs_acc_rakursPM",
			"rhs_acc_grip_ffg2",
			"rhsusf_shemagh_gogg_grn", 
			"UK3CB_TKA_O_V_6b23_ml_Oli_02", 
			"rhs_6b47" 
		};

		uniformClass = "UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK"; 
		backpack = "UK3CB_B_Tactical_Backpack"; 
	};

	class gren_ru 
	{
		displayName = "Гранотомётчик"; 
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\assault_ca.paa";
		role = "Assault";

		weapons[] = { 
			"rhs_weap_ak74n_2_gp25_npz" 
		}; 

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_VOG25", 
			"rhs_VOG25", 
			"rhs_VOG25", 
			"rhs_VOG25", 
			"rhs_VOG25", 
			"rhs_VOG25P", 
			"rhs_VOG25P", 
			"rhs_VOG25P", 
			"rhs_VOG25P", 
			"rhs_VOG25P", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_EarPlugs",
			"ACE_MapTools",
			"rhs_acc_dtk3",
			"rhs_acc_rakursPM",
			"UK3CB_TKA_O_V_6b23_ml_Oli_02",
			"rhs_6b47",
			"rhsusf_shemagh_gogg_grn" 
		};

		uniformClass = "UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK";
	};

	class co_ru 
	{ 
		displayName = "Командир";
		role = "Assault";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa";
	
		weapons[] = { 
			"rhs_weap_ak74n_2_gp25_npz", 
			"Binocular" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_VOG25", 
			"rhs_VOG25", 
			"rhs_VOG25", 
			"rhs_VOG25", 
			"rhs_VOG25", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK", 
			"rhs_30Rnd_545x39_7N22_AK" 
		};

		items[] = { 
			"FirstAidKit", 
			"FirstAidKit" 
		};

		linkedItems[] = { 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio", 
			"ItemGPS",
			"ACE_MapTools",
			"ACE_EarPlugs",
			"rhsusf_shemagh_gogg_grn",
			"rhs_acc_dtk3",
			"rhsusf_acc_su230a",
			"UK3CB_TKA_O_V_6b23_ml_Oli_02", 
			"rhs_6b47" 
		};

		uniformClass = "UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK"; 
		backpack = "tf_rt1523g_bwmod"; 
	};
};