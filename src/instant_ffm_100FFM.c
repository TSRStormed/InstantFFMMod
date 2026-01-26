#include "modding.h"
#include "functions.h"
#include "variables.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "enums.h"

// Patches a function in the base game that enables 100% FFM moves once entering MM
RECOMP_PATCH void func_802D6948(void){
    switch(map_get()){
        case MAP_2_MM_MUMBOS_MOUNTAIN:
            if (fileProgressFlag_get(FILEPROG_B0_HAS_ENTERED_MM) == FALSE) {
                ability_setLearned(ABILITY_1_BEAK_BOMB);
                ability_setLearned(ABILITY_2_BEAK_BUSTER);
                ability_setLearned(ABILITY_D_SHOCK_JUMP);
                ability_setLearned(ABILITY_E_WADING_BOOTS);
                ability_setLearned(ABILITY_10_TALON_TROT);
                ability_setLearned(ABILITY_11_TURBO_TALON);
                ability_setLearned(ABILITY_13_1ST_NOTEDOOR);
            }
            fileProgressFlag_set(FILEPROG_B0_HAS_ENTERED_MM, TRUE);
            break;
        case MAP_7_TTC_TREASURE_TROVE_COVE:
            fileProgressFlag_set(FILEPROG_B2_HAS_ENTERED_TTC, TRUE);
            break;
        case MAP_B_CC_CLANKERS_CAVERN:
            fileProgressFlag_set(FILEPROG_B8_HAS_ENTERED_CC, TRUE);
            break;
        case MAP_D_BGS_BUBBLEGLOOP_SWAMP:
            fileProgressFlag_set(FILEPROG_B1_HAS_ENTERED_BGS, TRUE);
            break;
        case MAP_12_GV_GOBIS_VALLEY:
            fileProgressFlag_set(FILEPROG_B3_HAS_ENTERED_GV, TRUE);
            break;
        case MAP_1B_MMM_MAD_MONSTER_MANSION:
            fileProgressFlag_set(FILEPROG_B7_HAS_ENTERED_MMM, TRUE);
            break;
        case MAP_27_FP_FREEZEEZY_PEAK:
            fileProgressFlag_set(FILEPROG_B6_HAS_ENTERED_FP, TRUE);
            break;
        case MAP_31_RBB_RUSTY_BUCKET_BAY:
            fileProgressFlag_set(FILEPROG_B4_HAS_ENTERED_RBB, TRUE);
            break;
        case MAP_40_CCW_HUB:
            fileProgressFlag_set(FILEPROG_B5_HAS_ENTERED_CCW, TRUE);
            break;
    }
}
