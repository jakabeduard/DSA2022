//
// Created by Last Gen Networks on 2/24/2022.
//

#include "../headers/errors.h"

void printErrorMassage(enum ErrorType error) {
    switch (error) {
        case MEMORY_ALLOCATION:printf("MEMORY_ALLOCATION");
            break;
        case FILE_NOT_FOUND:printf("FILE_NOT_FOUND");
            break;
        case NULL_POINTER_EXCEPTION:printf("NULL_POINTER_EXCEPTION");
            break;
        default:printf("UNDEFINED");
            break;


    }

}
