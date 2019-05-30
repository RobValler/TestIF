/*****************************************************************
 * Copyright (C) 2017-2019 Robert Valler - All rights reserved.
 *
 * This file is part of the project: StarterApp
 *
 * This project can not be copied and/or distributed
 * without the express permission of the copyright holder
 *****************************************************************/

#include <iostream>

#include "TestLib.h"

int main(int, char **)
{
    libPtr p = Init();
    libPtr l = Init();

//    Close(&p);

    WrapSetMethod(p, 34);
    WrapSetMethod(l, 1234);

    int val1 = WrapGetMethod(p);
    int val2 = WrapGetMethod(l);

    std::cout << "Test data 1 = " << val1 << std::endl;
    std::cout << "Test data 2 = " << val2 << std::endl;

    Close(&p);
    Close(&l);
}
