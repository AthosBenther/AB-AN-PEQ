class CfgPatches
{
	class anpeq
	{
		units[] = {'Anpeq'};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
			{
				"DZ_Data",
		};
	};
};

class cfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class UniversalLight;
	class anpeq : UniversalLight
	{
		scope = 2;
		displayName = "AN/PEQ-16 Flashlight";
		descriptionShort = "The AN/PEQ-16 Flashlight is a illuminator device for use on rifles fitted with a Picatinny rail";
		model = "AB-AN-PEQ\anpeq\anpeq.p3d";
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {1, 1};
		attachments[] = {"BatteryD"};
		inventorySlot[] =
			{
				"weaponFlashlight"};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		hiddenSelections[] =
			{
				"zbytek",
				"glass",
				"beamStart",
				"beamEnd"};
		hiddenSelectionsTextures[] =
			{
				"AB-AN-PEQ\anpeq\data\base_co.paa",
				"dz\weapons\attachments\data\m4_flashlight_co.paa",
				"dz\weapons\attachments\data\m4_flashlight_co.paa",
				"dz\gear\tools\data\flashlight_glass.paa",
				"dz\weapons\attachments\data\m4_flashlight_co.paa"};
		hiddenSelectionsMaterials[] =
			{
				"AB-AN-PEQ\anpeq\data\base.rvmat",
				"dz\weapons\attachments\data\m4_flashlight.rvmat",
				"dz\weapons\attachments\data\m4_flashlight.rvmat",
				"dz\gear\tools\data\flashlight_glass.rvmat",
				"dz\weapons\attachments\data\m4_flashlight.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.0099999998;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class anpeq_olive : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Olive)";
		color = "Olive";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"AB-AN-PEQ\anpeq\data\colors\base_co_olive.paa",
			"AB-AN-PEQ\anpeq\data\colors\base_co_olive.paa",
			"AB-AN-PEQ\anpeq\data\colors\base_co_olive.paa"
		};
	};
	class anpeq_black : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Black)";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"AB-AN-PEQ\anpeq\data\colors\base_co_black.paa",
			"AB-AN-PEQ\anpeq\data\colors\base_co_black.paa",
			"AB-AN-PEQ\anpeq\data\colors\base_co_black.paa"};
	};
	class anpeq_camo : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Camo)";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"AB-AN-PEQ\anpeq\data\colors\base_co_camo.paa",
			"AB-AN-PEQ\anpeq\data\colors\base_co_camo.paa",
			"AB-AN-PEQ\anpeq\data\colors\base_co_camo.paa"};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxy_anpeq : ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponFlashlight";
		model = "AB-AN-PEQ\anpeq\anpeq.p3d";
	};
};

class CfgMods
{
	class anpeq
	{
		dir = "anpeq";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "AN/PEQ-16 Flashlight";
		credits = "Athos Benther";
		author = "Athos Benther";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"AB-AN-PEQ/anpeq/scripts"};
			};
		};
	};
};