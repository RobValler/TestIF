/*****************************************************************
 * Copyright (C) 2017-2019 Robert Valler - All rights reserved.
 *
 * This file is part of the project: StarterApp
 *
 * This project can not be copied and/or distributed
 * without the express permission of the copyright holder
 *****************************************************************/


#include "TestLib.h"

#include <memory>

#include "c.hpp"


libPtr Init()
{
    TestClass* libRef = new(TestClass);
    return libRef;
}

void WrapSetMethod(libPtr ref, int val)
{
    if(nullptr == ref)
        return;
    TestClass* p = static_cast<TestClass*>(ref);
    p->SetMethod(val);
}

int WrapGetMethod(libPtr ref)
{
    if(nullptr == ref)
        return 999;

    TestClass* p = static_cast<TestClass*>(ref);
    return p->GetMethod();
}

void Close(libPtr* ref)
{
    if(nullptr != *ref) {
        delete static_cast<TestClass*>(*ref);
        *ref = nullptr;
    }
}

