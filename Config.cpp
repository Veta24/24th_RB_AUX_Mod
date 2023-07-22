class CfgPatches {
    class 24th_RB_Helmets {
        units[] = 
        {
            "" //Only matters if your working in multiple PBOs
        };
        weapons[] = 
        {
            "" //Only matters if your working in multiple PBOs
        };
        requiredVersion = 0.100000; //Only matters if your working in multiple PBOs
        requiredAddons[] = {}; //Only matters if your working in multiple PBOs
    };
};
//#include "xtdGear.hpp"
class cfgWeapons 
{

	class OPTRE_UNSC_Recon_Helmet;
	class ItemInfo;
	class 24th_RB_Ranger_Helmet: OPTRE_UNSC_Recon_Helmet
	{
		dlc="OPTRE";
		scope=2; //0 or 1 is zeus spawnable only, 2 is ace
		scopeArsenal = 2;
		author="Article 2 Studios"; //me
		displayName="R/B5 Helmet"; //shows in ace arsenal
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa"; //item picture
		model="\OPTRE_UNSC_Units\Army\recon_helmet.p3d"; //p3d
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]= //respective to names above
		{
			"optre_unsc_units\army\data\recon_co.paa",
			"optre_unsc_units\army\data\recon_visor_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: ItemInfo //comment out of here not above
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_unsc_units\army\data\recon_co.paa",
				"optre_unsc_units\army\data\recon_visor_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
		};
	};
};