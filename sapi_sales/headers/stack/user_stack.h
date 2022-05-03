//
// Created by Last Gen Networks on 5/4/2022.
//

#ifndef DSA2022_USER_STACK_H
#define DSA2022_USER_STACK_H
#include "user.h"
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
    int maxsize;
    int sp;
    int *items;
}STACK;
void create(STACK**myStack, int capacity);
bool isEmpty(STACK *myStack);
bool isFull(STACK *myStack);
void push(STACK *myStack, int val);
void pop(STACK *myStack);
int top(STACK *myStack);
#endif //DSA2022_USER_STACK_H
