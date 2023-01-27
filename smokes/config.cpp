class CfgPatches {

	class wrek_units {
        requiredAddons[] = {"DZ_Data", "DZ_Structures_Wrecks"};
    };
};

class CfgVehicles {

	class Inventory_Base;

    class RF_SMOKES_SMOKE_BASE: Inventory_Base {
        scope = 0;
        forceFarBubble = "true";
        storageCategory = 10;
    };

// Blue

    class RF_SMOKES_SMOKE_BLUE_V1: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };
    class RF_SMOKES_SMOKE_BLUE_V2: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };

// Black

    class RF_SMOKES_SMOKE_BLACK_V1: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };
    class RF_SMOKES_SMOKE_BLACK_V2: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };

// Green

    class RF_SMOKES_SMOKE_GREEN_V1: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };
    class RF_SMOKES_SMOKE_GREEN_V2: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };

// Yellow

    class RF_SMOKES_SMOKE_YELLOW_V1: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };
    class RF_SMOKES_SMOKE_YELLOW_V2: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };

// Red

    class RF_SMOKES_SMOKE_RED_V1: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };
    class RF_SMOKES_SMOKE_RED_V2: RF_SMOKES_SMOKE_BASE {
        scope = 2;
    };
};