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
#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 24th_Helmet_Base;
	class 24th_Helmet_Base_dp;

//Unit Helmets
class 24th_Druid_Helmet_Desert : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Desert)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Druid_Helmet_Desert_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Desert)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Desert.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
	
class 24th_Druid_Helmet_Snow : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Snow)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Druid_Helmet_Snow_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Snow)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Snow.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Druid_Helmet_Urban : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Urban)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Druid_Helmet_Urban_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Urban)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Urban.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };

class 24th_Druid_Helmet_Woodland : 24th_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[24th] Athena Helmet (Woodland)";
        author = "Ithias";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
			};
		};
    };
    class 24th_Druid_Helmet_Woodland_dp : 24th_Helmet_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[24th] Athena Helmet (Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
            "24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Visor_Silver.paa"
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
				"24th_AB_AUX\Equipment\Helmets\Tex\24th_Athena_Helmet_Woodland.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
    };
};
