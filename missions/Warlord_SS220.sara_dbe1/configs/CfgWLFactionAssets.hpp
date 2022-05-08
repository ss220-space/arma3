class CfgWLFactionAssets
{
	class WEST
	{
		class InfantryUnits
		{
			class rhsusf_army_ucp_rifleman {};
			class rhsusf_army_ucp_grenadier {};
			class rhsusf_army_ucp_medic {};
			class rhsusf_army_ucp_autoriflemana {};
			class rhsusf_army_ucp_autorifleman {};
			class rhsusf_army_ucp_marksman {};
			class rhsusf_army_ucp_machinegunnera {};
			class rhsusf_army_ucp_machinegunner {};
			class rhsusf_army_ucp_engineer {};
			class rhsusf_army_ucp_maaws {};
			class rhsusf_army_ucp_javelin_assistant {};
			class rhsusf_army_ucp_javelin {};
			class rhsusf_army_ucp_aa {};
			class rhsusf_army_ucp_sniper {};
			class rhsusf_army_ucp_sniper_m107 {};
		};
	};
	class EAST
	{
		class InfantryUnits
		{
			class rhs_vdv_rifleman {};
            class rhs_vdv_grenadier {};
			class rhs_vdv_medic {};
			class rhs_vdv_arifleman {};
			class rhs_vdv_machinegunner_assistant {};
			class rhs_vdv_marksman {};
			class rhs_vdv_engineer {};
			class rhs_vdv_machinegunner {};
			class rhs_vdv_strelok_rpg_assist {};
			class rhs_vdv_grenadier_rpg {};
			class rhs_vdv_LAT {};
			class rhs_vdv_at {};
			class rhs_vdv_aa {};
		};
	};
	class INDEP
	// UK3CB_NFA_I 
	{
		class InfantryGroups
		{
			groups[] = {
                "'Indep' >> 'UK3CB_NFA_I' >> 'Infantry' >> 'UK3CB_NFA_I_AA_FireTeam'",
                "'Indep' >> 'UK3CB_NFA_I' >> 'Infantry' >> 'UK3CB_NFA_I_AA_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Infantry' >> 'UK3CB_NFA_I_AR_FireTeam'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Infantry' >> 'UK3CB_NFA_I_AT_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Infantry' >> 'UK3CB_NFA_I_AR_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Infantry' >> 'UK3CB_NFA_I_AT_FireTeam'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'SpecOps' >> 'UK3CB_NFA_I_MG_FireTeam'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'SpecOps' >> 'UK3CB_NFA_I_RIF_FireTeam'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Infantry' >> 'UK3CB_NFA_I_Sniper_Team'"
			};
		};
		class MotorizedGroups
		{
			groups[] = {
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_BRDM2_Sentry'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_BTR40_MG_Sentry'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_BTR60_Motorised_RIF_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Datsun_MotInf_DSHKM_HIGH_Team'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Datsun_PKM_Sentry'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Hilux_MotInf_AGS30_Team'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Hilux_MotInf_SPG9_Team'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Hilux_PKM_Sentry'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Motorised_UAZ_Open_RIF_FireTeam'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_BTR60_Motorised_AA_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_V3S_Closed_Motorised_AT_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_V3S_Closed_Motorised_RIF_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_V3S_Open_Motorised_AA_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Zil131_Covered_Motorised_AT_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Zil131_Covered_Motorised_RIF_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Zil131_Open_Motorised_AA_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Zil131_Open_Motorised_MG_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Motorised_BTR40_RIF_FireTeam'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Datsun_MotInf_DSHKM_LOW_Team'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Motorized' >> 'UK3CB_NFA_I_Datsun_MotInf_PODNOS_Team'"
			};
		};
		class MechanizedGroups
		{
			groups[] = {
				"'Indep' >> 'UK3CB_NFA_I' >> 'Mechanized' >> 'UK3CB_NFA_I_BMP1_Mechanized_AA_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Mechanized' >> 'UK3CB_NFA_I_BMP1_Mechanized_AT_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Mechanized' >> 'UK3CB_NFA_I_BMP1_Mechanized_MG_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Mechanized' >> 'UK3CB_NFA_I_BMP1_Mechanized_RIF_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Mechanized' >> 'UK3CB_NFA_I_MTLB_PKT_Mechanized_AA_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Mechanized' >> 'UK3CB_NFA_I_MTLB_PKT_Mechanized_MG_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Mechanized' >> 'UK3CB_NFA_I_MTLB_PKT_Mechanized_RIF_Squad'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Mechanized' >> 'UK3CB_NFA_I_MTLB_PKT_Mechanized_AT_Squad'"
			};
		};
		class ArmoredGroups
		{
			groups[] = {
				"'Indep' >> 'UK3CB_NFA_I' >> 'Armored' >> 'UK3CB_NFA_I_TankPlatoon'",
				"'Indep' >> 'UK3CB_NFA_I' >> 'Armored' >> 'UK3CB_NFA_I_TankSection'"
			};
		};
	};
};