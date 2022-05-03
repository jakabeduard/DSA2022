//
// Created by Last Gen Networks on 5/4/2022.
//

#include "user_stack.h"

void create(STACK **myStack, int capacity) {
    (*myStack) = malloc(sizeof(STACK));
    //test
    (*myStack)->items = (malloc(capacity * sizeof(int)));
    (*myStack)->sp = -1;
}

bool isEmpty(STACK *myStack) {
    if (myStack != NULL)
        return myStack->sp == -1;
}

bool isFull(STACK *myStack) {
    if (myStack != NULL)
        return myStack->sp == myStack->maxsize;
}

void push(STACK *myStack, int val) {
    if (!isFull(myStack)){
        myStack->sp++;
        myStack->items[myStack->sp] = val;
    }
}

void pop(STACK *myStack) {
    if(!isEmpty(myStack))
        myStack->items[myStack->sp] = NULL;
    myStack->sp--;
}

int top(STACK *myStack) {
    if(!isEmpty(myStack))
    {return myStack->items[myStack->sp];}
}