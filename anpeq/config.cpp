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
	class anpeq : Inventory_Base
	{
		scope = 2;
		displayName = "AN/PEQ-16 Flashlight";
		descriptionShort = "The AN/PEQ-16 Flashlight is a illuminator device for use on rifles fitted with a Picatinny rail";
		model = "AB-AN-PEQ\anpeq\laser.p3d";
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
				"glass",
				"beamStart",
				"beamEnd"
			};
		hiddenSelectionsTextures[] =
			{
				"dz\weapons\attachments\data\m4_flashlight_co.paa",
				"dz\weapons\attachments\data\m4_flashlight_co.paa",
				"dz\gear\tools\data\flashlight_glass.paa",
				"dz\weapons\attachments\data\m4_flashlight_co.paa"};
		hiddenSelectionsMaterials[] =
			{
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
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxy_anpeq : ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponFlashlight";
		model = "AB-AN-PEQ\anpeq\laser.p3d";
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