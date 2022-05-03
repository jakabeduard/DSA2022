//
// Created by Last Gen Networks on 2/24/2022.
//


#include "../../headers/models/user.h"

char *getUserType(enum UserType user) {
    switch (user) {
        case STUDENT:return "STUDENT";
        case TEACHER: return "TEACHER";
        default:return " UNDEFINED";


    }
}

char *getGendertype(enum GenderType gender) {
    switch (gender) {
        case MALE:return "MALE";
        case FEMALE:return "FEMAIL";
        default:return " UNDEFINED";

    }
}

char *getSpetializationType(enum SpetializationType spetialization) {

    switch (spetialization) {
        case TELECOMMUNICATION:return "TELECOMMUNICATION";
        case INFORMATICS :return"INFORMATICS" ;
        case COMPUTER_SCIENCE: return "COMPUTER_SCIENCE";
        case AUTOMATIZATION: return "AUTOMATIZATION";
        default: return " UNDEFINED";
        
        
    }

}

void createUser(User **user) {
    (*user)=(User*)malloc(sizeof (User));
    if(!(*user)){
        printErrorMassage(MEMORY_ALLOCATION);

    }
    (*user) ->id=++numberOfUser;/////nem  ertem  ezt
    /////createProduct(&(user)->myProducts, MAX_PRODUCTS)////nincsen meg a my products
}



////lehet mas is
///void setUserDate(User *user, char *name4, enum UserType type3, enum GenderType gender8, enum SpetializationType spetialization8, int birtYea0r)
void setUserDate(User *user, char *name, enum UserType type, enum GenderType gender, enum SpetializationType spetialization, BirthDate birthday) {
    if(!user){
        printErrorMassage(NULL_POINTER_EXCEPTION);
    }
    strcpy(user->name,name);
    user->type=type;
    user->gender= gender;
    user->spetialization=spetialization;
    user->birthDate.year,user->birthDate.month,user->birthDate.day;


}

void printUser(User *user, char *destinatin ) {
    if (!user){
        printErrorMassage(NULL_POINTER_EXCEPTION);

    }
    freopen(destinatin, "w", stdout);/// nem  tudom  hogy  mi az a destenation .... nem  kellene  dired eyg file neve oda ;/?
    printf(  "\t%s details:\n"
             "\t\t-ID: %i\n"
             "\t\t- Type: %s\n"
             "\t\t- Amout: %u\n"
             "\t\t- Creation date: %4i%2i%2i\n",
             user->name,
             user->id,
             getUserType(user->type),
             getGendertype( user->gender),
             getSpetializationType(user->spetialization),
             user->birthDate.year,user->birthDate.month,user->birthDate.day);
    /// printMyProduct(user, destination);
    printf("\n");

    freopen(CON,"w", stdout);


}

void deleteUser(User **user) {
free(*user);
////deleteProductArray
////printDescriptionMessage(DELETED);
}
