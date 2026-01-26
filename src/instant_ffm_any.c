#include "modding.h"
#include "functions.h"
#include "variables.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "enums.h"

// Patches a function in the base game that enables Any% FFM moves once entering MM
RECOMP_PATCH void __overlay_lair_release(void){
    lair_func_8038CD48();

    ability_setAllLearned(-1);
}

