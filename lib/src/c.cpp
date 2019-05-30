/*****************************************************************
 * Copyright (C) 2017-2019 Robert Valler - All rights reserved.
 *
 * This file is part of the project: StarterApp
 *
 * This project can not be copied and/or distributed
 * without the express permission of the copyright holder
 *****************************************************************/


#include "c.hpp"

#include <iostream>

TestClass::~TestClass()
{
    std::cout << "TestClass destructor called " << std::endl;
}

void TestClass::SetMethod(int v)
{
    value = v;
}

int TestClass::GetMethod()
{
    return value;
}
