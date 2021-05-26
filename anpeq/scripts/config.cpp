
class CfgPatches
{
	class anpeq_Scripts
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class DZ_anpeq
	{
		name = "Mod Template";
		dir = "anpeq";
		credits = "";
		author = "";
		creditsJson = "anpeq/Scripts/Data/Credits.json";
		versionPath = "anpeq/scripts/Data/Version.hpp";
		inputs = "anpeq/Scripts/Data/Inputs.xml";
		type = "mod";
		dependencies[] =
		{
			"Game", "World", "Mission"
		};
		class defs
		{
			class imageSets
			{
				files[]=
				{
					"anpeq/gui/imagesets/dayz_editor_gui.imageset"
				};
			};
			class engineScriptModule
			{
				value = "";
				files[] =
				{
					"anpeq/scripts/common",
					"anpeq/scripts/1_core"
				};
			};

			class gameScriptModule
			{
				value="";
				files[] = 
				{
					"anpeq/scripts/common",
					"anpeq/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"anpeq/scripts/common",
					"anpeq/scripts/4_World"
				};
			};

			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					"anpeq/scripts/common",
					"anpeq/scripts/5_Mission"
				};
			};
		};
	};
};
