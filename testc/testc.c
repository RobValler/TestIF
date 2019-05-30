/*****************************************************************
 * Copyright (C) 2017-2019 Robert Valler - All rights reserved.
 *
 * This file is part of the project: StarterApp
 *
 * This project can not be copied and/or distributed
 * without the express permission of the copyright holder
 *****************************************************************/

#include <stdio.h>

#include "TestLib.h"

int main()
{
    libPtr p = Init();
    libPtr l = Init();

    WrapSetMethod(p, 34);
    WrapSetMethod(l, 1234);

    int val1 = WrapGetMethod(p);
    int val2 = WrapGetMethod(l);

    printf("Test data 1 = %d \n", val1);
    printf("Test data 2 = %d \n", val2);

    Close(&p);
    Close(&l);
    return 0;
}
