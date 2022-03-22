//
// Created by Last Gen Networks on 2/24/2022.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//

#ifndef LABS_FUNCTION_H
#define LABS_FUNCTION_H
//// egyszru  muveletek
int sum( int a, int b);
int maximum(int a, int b);
int minimum(int a, int b);

//// tombos  muveletek
void allocateArray(float ** array, int size);
void fillWithRandomElements(float* array, int size, float start , float end );
void printArray( float * array, int size);
#endif //LABS3_FUNCTION_H

