/*****************************************************************
 * Copyright (C) 2017-2019 Robert Valler - All rights reserved.
 *
 * This file is part of the project: StarterApp
 *
 * This project can not be copied and/or distributed
 * without the express permission of the copyright holder
 *****************************************************************/


#ifndef C_HPP
#define C_HPP

class TestClass {
public:
    TestClass():value(1){}
    ~TestClass();

    void SetMethod(int v);
    int GetMethod();

private:
    int value;
};


#endif
