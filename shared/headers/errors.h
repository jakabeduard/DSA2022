//
// Created by Last Gen Networks on 2/24/2022.
//
#include <stdio.h>
#ifndef MAIN_C_ERRORS_H
#define MAIN_C_ERRORS_H
enum ErrorType{MEMORY_ALLOCATION, FILE_NOT_FOUND, NULL_POINTER_EXCEPTION};

void printErrorMassage(enum ErrorType error);
#endif //MAIN_C_ERRORS_H
