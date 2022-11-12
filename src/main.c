/*
    MAIN.C FILE OF THE CEIROP PROJECT (CRP_INTERPRETER)

NOTE: @Ceirop is an account made by @Wytek01
*/

// For developing only. If you're making a mod, make sure to set this to 1 :)
// Make sure to set it to 0 on release!
#define DEBUG 1

#include <stdio.h>
#include <stdlib.h>
#include "logs.h"

#ifndef CEIROPVER
 #define CEIROPVER "0.1"
#endif
int main()
{
    Log(INFO, ("Ceirop Version: " + CEIROPVER));
    
    return 0;
}
