class CfgPatches {
	class Druid_Armor_Main {
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
    	class 24th_Armor_Reservist;
	class 24th_Armor_Ranger;
	class 24th_Armor_SL;
	class 24th_Armor_Reservist_Heavy;
	class 24th_Armor_Ranger_Heavy;
	class 24th_Armor_SL_Heavy;


//Desert 

class 24th_Druid_Armor_Reservist_Desert: 24th_Armor_Reservist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Recruit / Desert)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Desert",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Recruit_Desert",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Desert",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 24th_Druid_Armor_Ranger_Desert: 24th_Armor_Ranger
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Rifleman / Desert)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Desert",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Desert",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Desert",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 24th_Druid_Armor_SL_Desert: 24th_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Squad Leader / Desert)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Desert",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_NCO_Desert",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Desert",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

//Snow 

class 24th_Druid_Armor_Reservist_Snow: 24th_Armor_Reservist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Recruit / Snow)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Snow",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Recruit_Snow",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Snow",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 24th_Druid_Armor_Ranger_Snow: 24th_Armor_Ranger
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Rifleman / Snow)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Snow",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Snow",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Snow",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 24th_Druid_Armor_SL_Snow: 24th_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Squad Leader / Snow)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Snow",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_NCO_Snow",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Snow",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

//Urban 

class 24th_Druid_Armor_Reservist_Urban: 24th_Armor_Reservist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Recruit / Urban)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Recruit_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Urban",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 24th_Druid_Armor_Ranger_Urban: 24th_Armor_Ranger
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Rifleman / Urban)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Urban",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 24th_Druid_Armor_SL_Urban: 24th_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Squad Leader / Urban)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_NCO_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Urban",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

//Woodland 

class 24th_Druid_Armor_Reservist_Woodland: 24th_Armor_Reservist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Recruit / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Woodland",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Recruit_Woodland",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Woodland",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 24th_Druid_Armor_Ranger_Woodland: 24th_Armor_Ranger
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Rifleman / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Woodland",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Woodland",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Woodland",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};


class 24th_Druid_Armor_SL_Woodland: 24th_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Squad Leader / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Woodland",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_NCO_Woodland",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Woodland",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

//Heavy 

class 24th_Druid_Armor_Reservist_Heavy: 24th_Armor_Reservist_Heavy
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Recruit / Heavy)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Recruit_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Urban",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 24th_Druid_Armor_Ranger_Heavy: 24th_Armor_Ranger_Heavy
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Rifleman / Heavy)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Urban",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 24th_Druid_Armor_SL_Heavy: 24th_Armor_SL_Heavy
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "24th AUX";
		author = "Ithias";
		displayName="[24th] Athena Armor (Squad Leader / Heavy)";
		hiddenSelectionsTextures[]=
		{
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Vest_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Armor_NCO_Urban",
			"24th_AB_AUX\Equipment\Vests\Tex\24th_Athena_Leg_Urban",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
};
