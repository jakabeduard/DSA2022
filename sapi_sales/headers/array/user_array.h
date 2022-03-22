//
// Created by Last Gen Networks on 3/18/2022.
//


#ifndef MAIN_C_USER_ARRAY_H
#define MAIN_C_USER_ARRAY_H
#include "user.h"
#endif //MAIN_C_USER_ARRAY_H

typedef struct {
    unsigned int maxUser;
    User **users;
}UserArray;

void  createUserArray(UserArray ** userArray, unsigned int maxUsers);
void deleteUserArray(UserArray  **userArray, User *newUser, unsigned int position);
bool addUser(UserArray* userArray, User* newUser, unsigned int position);
User *getUserAtPosition(UserArray* userArray,  unsigned  int position);


void readUser(UserArray *userArray, char *from );
void printUsers( UserArray *userArray, char *destination);