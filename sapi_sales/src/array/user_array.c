//
// Created by Last Gen Networks on 3/18/2022.
//

#include "../../headers/array/user_array.h"

void createUserArray(UserArray **userArray, unsigned int maxUsers) {

    (*userArray)=malloc(sizeof(UserArray));
    if (!(*userArray)){ printErrorMassage(MEMORY_ALLOCATION);}

    (*userArray)->users=malloc(maxUsers*sizeof(User));
    if (!(*userArray)->users)  { printErrorMassage(MEMORY_ALLOCATION);}

    for (int i = 0; i < maxUsers; ++i) {
        createUser(&(*userArray)->users[i]);
    }
    for (int i = 0; i < maxUsers; ++i) {
        (*userArray)->users[i]=NULL;
    }

    (*userArray)->maxUser=maxUsers;
}



void addUser(UserArray *userArray, User *newUser, unsigned int position) {

    if ( position>=0   && userArray->maxUser> position) {
        userArray->users[position]=newUser;
    }
}


//
//User *getUserAtPosition(UserArray *userArray, unsigned int position) {
//    if (!UserArray){
//        printErrorMassage( NULL_POINTER_EXCEPTION);
//    }
//}



void readUser(UserArray *userArray, char *from) {

    if (!freopen(from, "r", stdin)) { printErrorMassage(FILE_NOT_FOUND); }

    else {
        int n, id, ev, honap, nap, beosztas, nem, szak;
        char nev[30];
        scanf("%i", n);

        for (int i = 0; i < n; ++i) {
            id = i;
            scanf("%s", &nev);
            scanf("%i%i%i", &ev, &honap, &nap);
            scanf("%i", &beosztas);
            scanf("%i", &nem);
            scanf("%i", &szak);

            User *user;
            BirthDate szuletesnap = {ev, honap, nap};
            createUser(&user);
            setUserDate(user, nev, beosztas, nem, szak, szuletesnap);
            addUser(userArray, user, i);
        }


        freopen("CON", "r", stdin);
    }
}

void printUsers(UserArray *userArray, char *destination){
    if(!freopen(destination, "w", stdout)) {
        printErrorMassage(FILE_NOT_FOUND);
    } else{

        for (int i = 0; i < (userArray->maxUser); ++i) {

            if(userArray->users[i]=NULL){

                printUsers(userArray->users[i],destination);
            }

        }
    }



}
    void deleteUserArray(UserArray  **userArray) {

    for (int i = 0; i < (*userArray)->maxUser; ++i) {
        free((*userArray)->users[i]);
    }

    free(*userArray);
}