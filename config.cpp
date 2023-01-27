#define _ARMA_

class CfgPatches {
	class RF_SMOKES {
		author = "Dad Fedor & romabeorn";
		name = "RF_SMOKES";
		url = "https://discord.gg/d9kP7ezX3n";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"DZ_Data", "DZ_Sounds_Effects"};
		requiredVersion = 0.1;
	};

    class DZ_Gear_Camping {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data"};
    };
};

class CfgMods {
	class RF_SMOKES {
		type="mod";
		dir="RF_SMOKES";
		class defs {
			class gameScriptModule {
				value = "";
				files[] = { "RF_SMOKES/scripts/3_Game" };
			};
			class worldScriptModule {
				value = "";
				files[] = { "RF_SMOKES/scripts/4_World" };
			};
		};
	};
};
