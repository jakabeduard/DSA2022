//
// Created by Last Gen Networks on 3/18/2022.
//

#include "../../headers/array/user_array.h"

void createUserArray(UserArray **userArray, unsigned int maxUsers) {
    (**userArray)=(userArray**)malloc(maxUser* sizeof(*UserArray));
    for (int i = 0; i < maxUsers; ++i) {
        (*userArray)->users[i]=(User**) malloc(maxUsers*sizeof(User));
    }

    if (!(userArray)){printErrorMassage(MEMORY_ALLOCATION);}
}

void deleteUserArray(UserArray  **userArray, User *newUser, unsigned int position) {

    for (int i = 0; i < UserArray->maxUser; ++i) {
        free((*userArray->users[i]);
    }

    free(*userArray);
}



bool addUser(UserArray *userArray, User *newUser, unsigned int position) {
    if (userArray=NULL&&userArray->maxUser>position&&position>=0&&newUser=NULL){
        return true;
    } else return false;
}



User *getUserAtPosition(UserArray *userArray, unsigned int position) {
    if (!UserArray){
        printErrorMassage( NULL_POINTER_EXCEPTION);
    }
}



void readUser(UserArray *userArray, char *from) {
    if (!freopen(from , "r", stdin)){printErrorMassage( FILE_NOT_FOUND);}
    else{int n;
    scanf("%i\n",);}
    for (int i = 0; i < UserArrr; ++i) {
        User *newUser;
        createProduct(&us)

        scanf("%i", & newuser->spetialization);
        scanf("%i%i%i\n",&newUser->birthDate.year, &newUser->birthDate.month, &newUser->birthDate.day);



    }
freopen("CON", "r", stdin);
}

void printUsers(UserArray *userArray, char *destination) {
    freopen(destination, "w", stdout);
    for (int i = 0; i < userArray->maxUser; ++i) {
        if(userArray->users[i]=NULL){
            printUsers(userArray->users[i]);
        }

    }

}
