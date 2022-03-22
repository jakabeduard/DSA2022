//
// Created by Last Gen Networks on 2/24/2022.
//#include <stdio.h>

//
#include "function.h"
///#include "../headers/function.h"

int maximum(int a, int b){
    if (a>b){
        return a;
    }else return b;
}

int minimum(int a, int b){
    if (a<b){
        return a;
    }else return b;
}
int sum( int a, int b){
    return a+b;
}

void allocateArray(float **array, int size) {
    *array=(float *)calloc(size, sizeof(float ));
    if (!array){
        printf("Sikerteen  helyfoglalas ");
        exit(-1);
    }
}

void fillWithRandomElements(float *array, int size, float start, float end) {
srand(time(0));
    for (int i = 0; i < size; ++i) {
        array[i]=((float )rand()/RAND_MAX)*(end-start);

    }
}

void printArray(float *array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%5.2f ",array[i] );
    }
}
