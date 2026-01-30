#include "modding.h"
#include "functions.h"
#include "variables.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "enums.h"

typedef enum {
    CAT_100_PERCENT = 0,   
    CAT_ANY_PERCENT = 1,   
    CAT_ANY_RESTRICTED = 2 
} RunCategory;

// Patches a function in the base game that enables category FFM moves once entering MM
RECOMP_PATCH void __overlay_lair_release(void){

    u32 selected_category = recomp_get_config_u32("Category");

    //recomp_printf("Selected Category: %u\n", selected_category);

    switch (selected_category){
        case CAT_100_PERCENT:
            ability_setLearned(ABILITY_1_BEAK_BOMB);
            ability_setLearned(ABILITY_2_BEAK_BUSTER);
            ability_setLearned(ABILITY_D_SHOCK_JUMP);
            ability_setLearned(ABILITY_E_WADING_BOOTS);
            ability_setLearned(ABILITY_10_TALON_TROT);
            ability_setLearned(ABILITY_11_TURBO_TALON);
            ability_setLearned(ABILITY_13_1ST_NOTEDOOR);
            break;
        case CAT_ANY_PERCENT:
            ability_setAllLearned(-1);
            break;
        case CAT_ANY_RESTRICTED:
            ability_setLearned(ABILITY_1_BEAK_BOMB);
            ability_setLearned(ABILITY_2_BEAK_BUSTER);
            ability_setLearned(ABILITY_D_SHOCK_JUMP);
            ability_setLearned(ABILITY_E_WADING_BOOTS);
            ability_setLearned(ABILITY_10_TALON_TROT);
            ability_setLearned(ABILITY_11_TURBO_TALON);
            ability_setLearned(ABILITY_13_1ST_NOTEDOOR);
            ability_setLearned(ABILITY_6_EGGS);
            break;
    }
    lair_func_8038CD48();
}
