/*****************************************************************
 * Copyright (C) 2017-2019 Robert Valler - All rights reserved.
 *
 * This file is part of the project: StarterApp
 *
 * This project can not be copied and/or distributed
 * without the express permission of the copyright holder
 *****************************************************************/

#ifndef TESTLIB_H
#define TESTLIB_H

#ifdef __cplusplus
extern "C" {
#endif

typedef void* libPtr;

libPtr Init();
void WrapSetMethod(libPtr ref, int val);
int WrapGetMethod(libPtr ref);
void Close(libPtr* ref);

#ifdef __cplusplus
}
#endif

#endif // TESTLIB_H
