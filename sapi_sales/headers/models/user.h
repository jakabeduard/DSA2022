//
// Created by Last Gen Networks on 2/24/2022.
//
#include <stdlib.h>
#include "errors.h"
#include "constans.h"
#include <string.h>
#include "product.h"
#include <stdbool.h>


#ifndef MAIN_C_USER_H
#define MAIN_C_USER_H

typedef struct {
    unsigned  int year;
    unsigned  int month;
    unsigned int day;
}BirthDate;


enum UserType{
    STUDENT, TEACHER
};
enum GenderType{
    FEMALE, MALE
};
enum SpetializationType{
     TELECOMMUNICATION, INFORMATICS, COMPUTER_SCIENCE, AUTOMATIZATION
};
typedef  struct {
    unsigned int id;
    char name[30];
    enum UserType type;
    enum GenderType gender;
    enum SpetializationType spetialization;
    BirthDate birthDate;
} User;
char *getUserType(enum UserType user );
char *getGendertype(enum GenderType gender);
char *getSpetializationType(enum  SpetializationType spetialization);
void createUser( User **user );
void setUserDate(User *user, char *name, enum UserType type, enum GenderType gender, enum SpetializationType spetialization, BirthDate birtYear);
void printUser(User *user,char *destinatin );
void deleteUser( User ** user);

#endif //MAIN_C_USER_H
