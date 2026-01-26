#include "modding.h"
#include "functions.h"
#include "variables.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "enums.h"

// Patches a function in the base game that enables 100% FFM moves once entering MM
RECOMP_PATCH void __overlay_lair_release(void){
    lair_func_8038CD48();

    ability_setLearned(ABILITY_1_BEAK_BOMB);
    ability_setLearned(ABILITY_2_BEAK_BUSTER);
    ability_setLearned(ABILITY_D_SHOCK_JUMP);
    ability_setLearned(ABILITY_E_WADING_BOOTS);
    ability_setLearned(ABILITY_10_TALON_TROT);
    ability_setLearned(ABILITY_11_TURBO_TALON);
    ability_setLearned(ABILITY_13_1ST_NOTEDOOR);
}
