class CfgPatches {

	class wrek_units {
        requiredAddons[] = {"DZ_Data", "DZ_Structures_Wrecks"};
    };
};

class CfgVehicles {

	class Inventory_Base;

    class RF_SMOKES_STEAM_BASE: Inventory_Base {
        scope = 0;
        forceFarBubble = "true";
        storageCategory = 10;
    };

    class RF_SMOKES_CUP_STEAM: RF_SMOKES_STEAM_BASE {
        scope = 2;
    };
};