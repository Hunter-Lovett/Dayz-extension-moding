class CfgPatches {
    class DayzExtension {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data"};
    };
};

class CfgVehicles {
    class Inventory_Base;
    class MyClawhammer: Inventory_Base {
        scope = 2;
        displayName = "Clawhammer";
        descriptionShort = "A sturdy clawhammer useful for construction.";
        model = "\my_clawhammer_mod\models\clawhammer.p3d"; // Path to your model file
        weight = 1200; // Weight in grams
        itemSize[] = {3,2}; // Size in inventory (width, height)
        rotationFlags = 17; // Defines how the item can rotate in inventory
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\my_clawhammer_mod\textures\clawhammer_co.paa"}; // Path to your texture file
        
        damageSystem = {
            class GlobalHealth {
                class Health {
                    hitpoints = 700; // Durability (HP) of the clawhammer
                    healthLevels[] = {
                        {1.0, {"\my_clawhammer_mod\textures\clawhammer_co.paa"}}, // Full health texture
                        {0.7, {"\my_clawhammer_mod\textures\clawhammer_worn.paa"}}, // Worn texture
                        {0.5, {"\my_clawhammer_mod\textures\clawhammer_damaged.paa"}}, // Damaged texture
                        {0.3, {"\my_clawhammer_mod\textures\clawhammer_badlydamaged.paa"}}, // Badly damaged texture
                        {0.0, {"\my_clawhammer_mod\textures\clawhammer_ruined.paa"}} // Ruined texture
                    };
                };
            };
        };
    };
};