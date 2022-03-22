//
// Created by Last Gen Networks on 2/24/2022.
//

#include "../../headers/manager/lab2.h"



void userUserFunctionalities(){
    User *user1, *user2, *user3;
    createUser(&user1);
    createUser(&user2);
    createUser(&user3);


    setUserDate(user1, "Jhon Peterson", STUDENT, MALE, COMPUTER_SCIENCE, 1990);
    setUserDate(user1, "Jane Austin ", TEACHER, FEMALE, AUTOMATIZATION, 1996);
    setUserDate(user1, "Jhon Peterson", STUDENT, MALE, COMPUTER_SCIENCE, 2003);



    printUser(user1, CON);
    printUser(user2, CON);
    printUser(user3, CON);

    deleteUser(&user1);
    deleteUser(&user2);
    deleteUser(&user3);


}

typedef struct Product ;

void testUserFuncionalities(){
    Product* product1= createProduct("MS1", "Apple", FRUIT,10);
    Product* product2= createProduct("MS2", "Book", SCHOOL,4);
    Product* product3= createProduct("MS3", "Tomato", OBJECT,20);

    printProduct(product1);
    printProduct(product2);
    printProduct(product3);

    deleteProduct(product1);
    deleteProduct(product2);
    deleteProduct(product3);


}

#include "../../headers/manager/lab2.h"
