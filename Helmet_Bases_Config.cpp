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
	class OPTRE_UNSC_Recon_Helmet;
	class HeadgearItem;

//Base Start                                                                        Mark R/B5 Helmet

class 24th_Helmet_Base: OPTRE_UNSC_Recon_Helmet
	{
		author="Idk";
		displayName="WORK GOD DANGIT";
		model="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[] = 
        {
		"24th_RB_Aux\Helmet\Tex\24th_RB_Urban_Helmet_co.paa",
		"optre_unsc_units\army\data\recon_visor_co.paa",
		"optre_unsc_units\army\data\ghillie_woodland_co.paa",
		"optre_unsc_units\army\data\soft_packs_co.paa"
        };
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		class ItemInfo: HeadgearItem
        {
            mass=1;
            uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=15;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
        };
	};
	class 24th_Helmet_Base_dp: 24th_Helmet_Base
	{
		author="Idk";
		displayName="WORK GOD DANGIT";
		model="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[] = 
        {
		"24th_RB_Aux\Helmet\Tex\24th_RB_Urban_Helmet_co.paa",
		"optre_unsc_units\army\data\recon_visor_co.paa",
		"optre_unsc_units\army\data\ghillie_woodland_co.paa",
		"optre_unsc_units\army\data\soft_packs_co.paa"
        };
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		class ItemInfo: HeadgearItem
        {
            mass=1;
            uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=15;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
        };
	};

//Base End





// Base End
};
