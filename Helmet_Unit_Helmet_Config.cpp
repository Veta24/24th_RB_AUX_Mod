class CfgPatches {
	class Druid_Helmets {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 24th_Helmet_Base;
	class 24th_Helmet_Base_dp;

//Unit Helmets
/*
class 24th_Druid_Helmet_Desert : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th RB] Druid Helmet (Desert)";
        author = "Veta";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Desert.paa",
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Desert.paa",
				"24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Visor_Silver.paa"
			};
		};
    };
    class 24th_Druid_Helmet_Desert_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th RB] Druid Helmet (Desert)";
        hiddenSelectionsTextures[] = 
        {
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Desert.paa",
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Desert.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
*/
/*	
class 24th_Druid_Helmet_Snow : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th RB] Druid Helmet (Snow)";
        author = "Veta";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Snow.paa",
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Snow.paa",
				"24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Visor_Silver.paa"
			};
		};
    };
    class 24th_Druid_Helmet_Snow_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th RB] Druid Helmet (Snow)";
        hiddenSelectionsTextures[] = 
        {
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Snow.paa",
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Snow.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
*/

class 24th_Druid_Helmet_Urban : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th RB] Druid Helmet (Urban)";
        author = "Veta";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
		"24th_RB_Aux\Helmet\Tex\24th_RB_Urban_Helmet_co.paa",
		"optre_unsc_units\army\data\recon_visor_co.paa",
		"optre_unsc_units\army\data\ghillie_woodland_co.paa",
		"optre_unsc_units\army\data\soft_packs_co.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_Aux\Helmet\Tex\24th_RB_Urban_Helmet_co.paa",
				"optre_unsc_units\army\data\recon_visor_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
		};
    };
    class 24th_Druid_Helmet_Urban_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th RB] Druid Helmet (Urban)";
        hiddenSelectionsTextures[] = 
        {
		"24th_RB_Aux\Helmet\Tex\24th_RB_Urban_Helmet_co.paa",
		"optre_unsc_units\army\data\recon_visor_co.paa",
		"optre_unsc_units\army\data\ghillie_woodland_co.paa",
		"optre_unsc_units\army\data\soft_packs_co.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_Aux\Helmet\Tex\24th_RB_Urban_Helmet_co.paa",
				"optre_unsc_units\army\data\recon_visor_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
		};
    };
/*
class 24th_Druid_Helmet_Woodland : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th RB] Druid Helmet (Woodland)";
        author = "Veta";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Woodland.paa",
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Woodland.paa",
				"24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Visor_Silver.paa"
			};
		};
    };
    class 24th_Druid_Helmet_Woodland_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th RB] Druid Helmet (Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Woodland.paa",
            "24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Visor_Silver.paa"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_AUX\Equipment\Helmets\Tex\24th_Druid_Helmet_Woodland.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
*/
};
