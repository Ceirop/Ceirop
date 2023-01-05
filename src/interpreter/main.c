/*
    MAIN.C FILE OF THE CEIROP PROJECT (CRP_INTERPRETER)

NOTE: @Ceirop is an account made by @Wytek01
*/

// For developing only. If you're making a mod, make sure to define it :)
// Make sure to not define it on release!

//#define DBG

#include <stdio.h>
#include <stdlib.h>
#include "logs.h"
#include "ceirop.h"

#ifndef CEIROPVER
 #define CEIROPVER "0.1"
#endif
int main(int argc, char** argv[]) {
    Log(INFO, ("Ceirop Version: %s", CEIROPVER));
    Log(INFO, ("Selected file: %s", argv[1]));
    return 0;
}
