class CfgPatches 
{
	class 24th_Helmets_AA
	{
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

class cfgWeapons 
{
	class HeadgearItem;
	class OPTRE_UNSC_CH252A_Black_Helmet;
	class OPTRE_UNSC_CH252A_Black_Helmet_dp;
	class 24th_Helmet_AA_Base: OPTRE_UNSC_CH252A_Black_Helmet
	{
		author="Ithias";
		dlc="24th Aux";
		displayName="[24th] AA Helmet (Base)";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "\OPTRE_UNSC_Units\Army\aa_helmet.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[]={6};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 10;
					hitpointName="HitFace";
					passThrough=0.1;
				};	
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor = 10;
					hitpointName="HitNeck";
					passThrough=0.1;
				};	
			};
		};
	};	
	class 24th_Helmet_AA_Base_dp: OPTRE_UNSC_CH252A_Black_Helmet_dp
	{
		author="Ithias";
		dlc="24th Aux";
		displayName="[24th] AA Helmet (Base)";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "\OPTRE_UNSC_Units\Army\aa_helmet_dp.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[]={6};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 10;
					hitpointName="HitFace";
					passThrough=0.1;
				};	
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor = 10;
					hitpointName="HitNeck";
					passThrough=0.1;
				};	
			};
		};
	};
	
	//Base End
	class 24th_Helmet_AA_Woodland: 24th_Helmet_AA_Base
	{
		displayName="[24th] AA Helmet (Woodland)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
		};
		hiddenSelectionsTextures[]=
		{
			"24th_RB_AUX_Mod\Helmets\Air_Assault\Tex\24th_Helmet_AA_Woodland.paa",
			"24th_RB_AUX_Mod\Helmets\Air_Assault\Tex\24th_Helmet_AA_Visor.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_AUX_Mod\Helmets\Air_Assault\Tex\24th_Helmet_AA_Woodland.paa",
				"24th_RB_AUX_Mod\Helmets\Air_Assault\Tex\24th_Helmet_AA_Visor.paa",
			};
		};
	};
	class 24th_Helmet_AA_Woodland_dp: 24th_Helmet_AA_Base_dp
	{
		displayName="[24th] AA Helmet (Woodland)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
		};
		hiddenSelectionsTextures[]=
		{
			"24th_RB_AUX_Mod\Helmets\Air_Assault\Tex\24th_Helmet_AA_Woodland.paa",
			"24th_RB_AUX_Mod\Helmets\Air_Assault\Tex\24th_Helmet_AA_Visor.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
			};
			hiddenSelectionsTextures[]=
			{
				"24th_RB_AUX_Mod\Helmets\Air_Assault\Tex\24th_Helmet_AA_Woodland.paa",
				"24th_RB_AUX_Mod\Helmets\Air_Assault\Tex\24th_Helmet_AA_Visor.paa",
			};
		};
	};
};