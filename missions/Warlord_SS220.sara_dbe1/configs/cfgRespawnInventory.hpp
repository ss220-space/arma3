class CfgRespawnInventory
{
	class rifleman_us
	{
		displayName = "Стрелок";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Assault";

		weapons[] = {
			"rhs_weap_m4a1", 
			"rhs_weap_M136_hedp" 
		};

		magazines[] = { 
			"rhs_mag_m67", 
			"rhs_mag_m67", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag" 
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
			"rhsusf_acc_anpeq15_top", 
			"rhsusf_acc_su230a", 
			"rhsusf_acc_kac_grip", 
			"rhsusf_oakley_goggles_clr", 
			"rhsusf_ach_helmet_ocp",
			"rhsusf_spcs_ocp_rifleman"
		};

		uniformClass = "rhs_uniform_cu_ocp_101st";
	};

	class sniper_us 
	{
		displayName = "Снайпер";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
		role = "Recon";

		weapons[] = { 
			"rhs_weap_m14ebrri", 
			"rhsusf_bino_lrf_Vector21" 
		};

		magazines[] = { 
			"rhsusf_20Rnd_762x51_m118_special_Mag", 
			"rhsusf_20Rnd_762x51_m118_special_Mag", 
			"rhsusf_20Rnd_762x51_m118_special_Mag", 
			"rhsusf_20Rnd_762x51_m118_special_Mag", 
			"rhsusf_20Rnd_762x51_m118_special_Mag", 
			"rhsusf_20Rnd_762x51_m118_special_Mag", 
			"rhsusf_20Rnd_762x51_m118_special_Mag", 
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
			"rhsusf_oakley_goggles_clr", 
			"rhsusf_spcs_ocp_sniper", 
			"rhsusf_ach_helmet_ESS_ocp_alt", 
			"rhsusf_acc_harris_bipod", 
			"rhsusf_acc_LEUPOLDMK4" 
		};

		uniformClass = "rhs_uniform_cu_ocp_101st"; 
	};

	class at_us 
	{ 
		displayName = "Специалист АТ";
		role = "Support";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa"; 
		weapons[] = { 
			"rhs_weap_m4a1", 
			"rhs_weap_maaws" 
		};

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
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
			"rhsusf_oakley_goggles_clr", 
			"rhsusf_spcs_ocp_saw", 
			"rhsusf_ach_helmet_ESS_ocp_alt", 
			"rhsusf_acc_su230a", 
			"rhs_optic_maaws", 
			"rhsusf_acc_kac_grip" 
		};

		uniformClass = "rhs_uniform_cu_ocp_101st"; 
		backpack = "rhsusf_assault_eagleaiii_ocp"; 
	};

	class mg_us 
	{ 
		displayName = "Пулемётчик"; 
		icon = "iconManEXP";
		role = "Support";
		weapons[] = { 
			"rhs_weap_m249_pip_S" 
		}; 

		magazines[] = { 
			"rhsusf_200Rnd_556x45_box", 
			"rhsusf_200Rnd_556x45_box", 
			"rhsusf_200Rnd_556x45_box", 
			"rhsusf_200Rnd_556x45_box", 
			"rhsusf_200Rnd_556x45_box", 
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
			"rhsusf_oakley_goggles_clr", 
			"rhsusf_spcs_ocp_machinegunner", 
			"rhsusf_ach_helmet_ESS_ocp_alt", 
			"rhsusf_acc_saw_lw_bipod", 
			"rhsusf_acc_SF3P556", 
			"rhsusf_acc_g33_xps3" 
		}; 

		uniformClass = "rhs_uniform_cu_ocp_101st"; 
		backpack = "rhsusf_assault_eagleaiii_ocp"; 
	};

	class medic_us 
	{ 
		displayName = "Медик"; 
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\support_ca.paa";
		role = "Support";

		weapons[] = { 
			"rhs_weap_m4a1" 
		};

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
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
			"rhsusf_oakley_goggles_clr", 
			"rhsusf_spcs_ocp_medic", 
			"rhsusf_ach_helmet_ESS_ocp_alt", 
			"rhsusf_acc_su230a", 
			"rhsusf_acc_kac_grip" 
		};

		uniformClass = "rhs_uniform_cu_ocp_101st"; 
		backpack = "rhsusf_assault_eagleaiii_ocp"; 
	};

	class aa_us 
	{ 
		displayName = "Специалист АА"; 
		icon = "iconMan";
		role = "Support";

		weapons[] = { 
			"rhs_weap_m4a1", 
			"rhs_weap_fim92" 
		};

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
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
			"rhsusf_oakley_goggles_clr", 
			"rhsusf_spcs_ocp_saw", 
			"rhsusf_ach_helmet_ESS_ocp_alt", 
			"rhsusf_acc_su230a", 
			"rhsusf_acc_kac_grip" 
		};

		uniformClass = "rhs_uniform_cu_ocp_101st"; 
		backpack = "rhsusf_assault_eagleaiii_ocp"; 
	};

	class eng_us 
	{ 
		displayName = "Инженер"; 
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; 
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_m4a1" 
		}; 

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
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
			"rhsusf_oakley_goggles_clr", 
			"rhsusf_spcs_ocp_saw", 
			"rhsusf_ach_helmet_ESS_ocp_alt", 
			"rhsusf_acc_su230a", 
			"rhsusf_acc_kac_grip" 
		}; 

		uniformClass = "rhs_uniform_cu_ocp_101st"; 
		backpack = "rhsusf_assault_eagleaiii_ocp"; 
	}; 

	class gren_us 
	{ 
		displayName = "Гранотомётчик"; 
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\assault_ca.paa";
		role = "Assault";

		weapons[] = { 
			"rhs_weap_m4a1_carryhandle_m203" 
		};
		
		magazines[] = { 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
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
			"rhsusf_oakley_goggles_clr", 
			"rhsusf_spcs_ocp_saw", 
			"rhsusf_ach_helmet_ESS_ocp_alt", 
			"rhsusf_acc_su230a", 
			"rhsusf_acc_grip_m203_blk" 
		};

		uniformClass = "rhs_uniform_cu_ocp_101st"; 
		backpack = "rhsusf_assault_eagleaiii_ocp"; 
	}; 

	class co_us 
	{ 
		displayName = "Командир";
		role = "Assault";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa";

		weapons[] = { 
			"rhs_weap_m4a1_blockII_M203_bk", 
			"Binocular" 
		};

		magazines[] = { 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
			"rhs_mag_30Rnd_556x45_M855A1_Stanag", 
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
			"rhsusf_oakley_goggles_clr", 
			"rhsusf_spcs_ocp_saw", 
			"rhsusf_ach_helmet_ESS_ocp_alt", 
			"rhsusf_acc_su230a", 
			"rhsusf_acc_grip_m203_blk", 
			"rhsusf_acc_anpeq15side_bk" 
		};

		uniformClass = "rhs_uniform_cu_ocp_101st"; 
		backpack = "tf_anprc155_coyote";
	};

	class rifleman_ru 
		{ 
		displayName = "Стрелок";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Assault";
		
		weapons[] = { 
			"rhs_weap_ak103_2", 
			"rhs_weap_rshg2" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_rshg2_mag", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer" 
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
			"rhs_acc_dtk", 
			"rhs_acc_pkas", 
			"rhs_6b23_digi_6sh92", 
			"rhs_6b28" 
		};

		uniformClass = "rhs_uniform_vdv_emr_des"; 
	};

	class sniper_ru 
	{ 
		displayName = "Снайпер";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
		role = "Recon";
	
		weapons[] = { 
			"rhs_weap_svdp" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_10Rnd_762x54mmR_7N14", 
			"rhs_10Rnd_762x54mmR_7N14", 
			"rhs_10Rnd_762x54mmR_7N14", 
			"rhs_10Rnd_762x54mmR_7N14", 
			"rhs_10Rnd_762x54mmR_7N14", 
			"rhs_10Rnd_762x54mmR_7N14", 
			"rhs_10Rnd_762x54mmR_7N14", 
			"rhs_10Rnd_762x54mmR_7N14", 
			"rhs_10Rnd_762x54mmR_7N14", 
			"rhs_10Rnd_762x54mmR_7N14" 
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
			"rhs_acc_pso1m2", 
			"rhs_6b23_digi_6sh92", 
			"rhs_6b28" 
		};

		uniformClass = "rhs_uniform_vdv_emr_des"; 
	}; 

	class mg_ru 
	{ 
		displayName = "Пулемётчик"; 
		icon = "iconManEXP";
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_pkp" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_100Rnd_762x54mmR", 
			"rhs_100Rnd_762x54mmR", 
			"rhs_100Rnd_762x54mmR", 
			"rhs_100Rnd_762x54mmR", 
			"rhs_100Rnd_762x54mmR" 
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
			"rhs_acc_1p29", 
			"rhs_6b23_digi_6sh92", 
			"rhs_6b28" 
		}; 

		uniformClass = "rhs_uniform_vdv_emr_des"; 
		backpack = "rhs_tortila_emr"; 
	};

	class medic_ru 
	{ 
		displayName = "Медик"; 
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\support_ca.paa";
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_ak103_2" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer" 
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
			"rhs_acc_dtk", 
			"rhs_acc_pkas", 
			"rhs_6b23_digi_6sh92", 
			"rhs_6b28" 
		};

		uniformClass = "rhs_uniform_vdv_emr_des"; 
		backpack = "rhs_medic_bag"; 
	}; 

	class eng_ru 
	{ 
		displayName = "Инженер"; 
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; 
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_ak103_2" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer" 
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
			"rhs_acc_dtk",
			"rhs_acc_pkas",
			"rhs_6b23_digi_6sh92",
			"rhs_6b28"
		};

		uniformClass = "rhs_uniform_vdv_emr_des"; 
		backpack = "rhs_assault_umbts_engineer_empty"; 
	};

	class at_ru 
	{ 
		displayName = "Специалист АТ";
		role = "Support";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa"; 
	
		weapons[] = { 
			"rhs_weap_ak103_2", 
			"rhs_weap_rpg7" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_rpg7_PG7VL_mag", 
			"rhs_rpg7_PG7VL_mag", 
			"rhs_rpg7_OG7V_mag", 
			"rhs_rpg7_OG7V_mag", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer" 
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
			"rhs_acc_dtk", 
			"rhs_acc_pkas", 
			"rhs_acc_pgo7v2", 
			"rhs_6b23_digi_6sh92", 
			"rhs_6b28" 
		};

		uniformClass = "rhs_uniform_vdv_emr_des"; 
		backpack = "rhs_rpg_empty"; 
	};

	class aa_ru 
	{ 
		displayName = "Специалист АА"; 
		icon = "iconMan";
		role = "Support";
		
		weapons[] = { 
			"rhs_weap_ak103_2", 
			"rhs_weap_igla" 
		};

		magazines[] = { 
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5", 
			"rhs_mag_9k38_rocket", 
			"rhs_mag_9k38_rocket", 
			"rhs_mag_9k38_rocket", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer" 
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
			"rhs_acc_dtk", 
			"rhs_acc_pkas", 
			"rhs_6b23_digi_6sh92", 
			"rhs_6b28" 
		};

		uniformClass = "rhs_uniform_vdv_emr_des"; 
		backpack = "rhs_tortila_emr"; 
	};

	class gren_ru 
	{
		displayName = "Гранотомётчик"; 
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\assault_ca.paa";
		role = "Assault";

		weapons[] = { 
			"rhs_weap_ak103_gp25" 
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
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer" 
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
			"rhs_6b23_digi_6sh92", 
			"rhs_6b28" 
		};

		uniformClass = "rhs_uniform_vdv_emr_des";
	};

	class co_ru 
	{ 
		displayName = "Командир";
		role = "Assault";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa";
	
		weapons[] = { 
			"rhs_weap_ak103_gp25", 
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
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer", 
			"rhs_30Rnd_762x39mm_polymer" 
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
			"rhs_acc_dtk", 
			"rhs_acc_pkas", 
			"rhs_6b23_digi_6sh92", 
			"rhs_6b28" 
		};

		uniformClass = "rhs_uniform_vdv_emr_des"; 
		backpack = "tf_rt1523g_bwmod"; 
	};
};