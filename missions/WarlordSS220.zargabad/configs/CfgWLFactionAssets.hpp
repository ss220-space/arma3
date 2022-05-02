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
	// rhsgref_faction_nationalist 
	{
		class InfantryGroups
		{
			groups[] = {
                "'Indep' >> 'rhsgref_faction_nationalist' >> 'rhsgref_group_national_infantry' >> 'rhsgref_group_national_infantry_squad'",
                "'Indep' >> 'rhsgref_faction_nationalist' >> 'rhsgref_group_national_infantry' >> 'rhsgref_group_national_infantry_squad_2'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhsgref_group_national_infantry' >> 'rhsgref_group_national_infantry_mg'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhsgref_group_national_infantry' >> 'rhsgref_group_national_infantry_at'"
			};
		};
		class MotorizedGroups
		{
			groups[] = {
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_ural' >> 'rhs_group_nat_ural_chq'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_ural' >> 'rhs_group_nat_ural_squad'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_ural' >> 'rhs_group_nat_ural_squad_2mg'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_ural' >> 'rhs_group_nat_ural_squad_sniper'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_ural' >> 'rhs_group_nat_ural_squad_mg_sniper'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_ural' >> 'rhs_group_nat_ural_squad_aa'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_nat_uaz' >> 'BUS_MotInf_Team_GMG'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_nat_uaz' >> 'BUS_MotInf_Team_HMG'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_nat_uaz' >> 'BUS_MotInf_AT'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_nat_uaz' >> 'BUS_MotInf_AA'"
			};
		};
		class MechanizedGroups
		{
			groups[] = {
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_btr70' >> 'rhs_group_nat_btr70_chq'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_btr70' >> 'rhs_group_nat_btr70_squad'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_btr70' >> 'rhs_group_nat_btr70_squad_2mg'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_btr70' >> 'rhs_group_nat_btr70_squad_sniper'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_btr70' >> 'rhs_group_nat_btr70_squad_mg_sniper'",
				"'Indep' >> 'rhsgref_faction_nationalist' >> 'rhs_group_indp_nat_btr70' >> 'rhs_group_nat_btr70_squad_aa'"
			};
		};
		class ArmoredGroups
		{
			groups[] = {
				"'Indep' >> 'rhsgref_faction_chdkz' >> 'rhs_group_indp_ins_72' >> 'RHS_T72baPlatoon'",
				"'Indep' >> 'rhsgref_faction_chdkz' >> 'rhs_group_indp_ins_72' >> 'RHS_T72baPlatoon_AA'",
				"'Indep' >> 'rhsgref_faction_chdkz' >> 'rhs_group_indp_ins_72' >> 'RHS_T72baSection'",
				"'Indep' >> 'rhsgref_faction_chdkz' >> 'rhs_group_indp_ins_72' >> 'RHS_T72BBPlatoon'",
				"'Indep' >> 'rhsgref_faction_chdkz' >> 'rhs_group_indp_ins_72' >> 'RHS_T72BBPlatoon_AA'",
				"'Indep' >> 'rhsgref_faction_chdkz' >> 'rhs_group_indp_ins_72' >> 'RHS_T72BBSection'",
				"'Indep' >> 'rhsgref_faction_chdkz' >> 'rhs_group_indp_ins_72' >> 'RHS_t72bcPlatoon'",
				"'Indep' >> 'rhsgref_faction_chdkz' >> 'rhs_group_indp_ins_72' >> 'RHS_t72bcPlatoon_AA'",
				"'Indep' >> 'rhsgref_faction_chdkz' >> 'rhs_group_indp_ins_72' >> 'RHS_t72bcSection'"
			};
		};
	};
};