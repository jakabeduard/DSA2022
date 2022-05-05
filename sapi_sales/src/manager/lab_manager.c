
 //Created by Last Gen Networks on 2/24/2022.


//#include "../../headers/manager/lab_manager.h"
//void lab2(){
//    printDescritionMessage(LAB2);
//    testUserFunctionalities();
//    testProductFuncionalities();
//
//
//}
//void lab3(){
//    printDescritionMessage(LAB3);
//}
#include "lab_manager.h"
// void testUserFuncionalities(){
//     UserArray  *userArray;
//     createUserArray(&userArray,MAX_USER);
//
// }

// void testNodeFuncionalities() {
//     void createUserNode(UserNode **userNode, User  *userValue);
//     void printUserNode(UserNode * userNode, char destination );
//     int findeElementsInList(UserNode *userNode, int id);
//     void insertFirst(UserNode **userNode, User *userValue);
//     void insertLast(UserNode *userNode, User *userValue);
//     User *removeFirst(UserNode **userNode );
//     User *removeLast(UserNode **userNode );
//     void deleteUserList(UserNode **userNode);
//
// }
//
// void testProductFuncionalities(){
//
//     Product *product1,*product2,*product3;
//     createProduct(&product1);
//     createProduct(&product2);
//     createProduct(&product3);
//
//     setProductData(product1, "Book", SCHOOL,4);
//     setProductData(product2, "Book", FRUIT,4);
//     setProductData(product3, "Tomato", OBJECT,20);
//
//
//
//
//     printProduct(product1);
//     printProduct(product2);
//     printProduct(product3);
//
////     deleteProduct(product1);
////     deleteProduct(product2);
////     deleteProduct(product3);
//
//
// }
//
//
// void userUserFunctionalities(){
//     User *user1, *user2, *user3;
//     createUser(&user1);
//     createUser(&user2);
//     createUser(&user3);
//
//     BirthDate szuletesnap={1990,12,01};
//     BirthDate szuletesnap2={1999,01,23};
//     BirthDate szuletesnap3={1995,02,28};
//     setUserDate(user1, "Jhon Peterson", STUDENT, MALE, COMPUTER_SCIENCE, szuletesnap);
//     setUserDate(user1, "Jane Austin ", TEACHER, FEMALE, AUTOMATIZATION, szuletesnap2);
//     setUserDate(user1, "Jhon Peterson", STUDENT, MALE, COMPUTER_SCIENCE, szuletesnap3);
//
//
//
//     printUser(user1, CON);
//     printUser(user2, CON);
//     printUser(user3, CON);
//
//     deleteUser(&user1);
//     deleteUser(&user2);
//     deleteUser(&user3);
//
//
// }
 void testUserBinaryTree(){
    UserTreeNode *userTreeNode;
     User *user1, *user2, *user3;
     createUser(&user1);
     createUser(&user2);
     createUser(&user3);

     BirthDate szuletesnap={1990,12,01};
     BirthDate szuletesnap2={1999,01,23};
     BirthDate szuletesnap3={1995,02,28};
     setUserDate(user1, "Jhon Peterson", STUDENT, MALE, COMPUTER_SCIENCE, szuletesnap);
     setUserDate(user1, "Jane Austin ", TEACHER, FEMALE, AUTOMATIZATION, szuletesnap2);
     setUserDate(user1, "Jhon Peterson", STUDENT, MALE, COMPUTER_SCIENCE, szuletesnap3);


      insert( &userTreeNode, user1);
      insert( &userTreeNode, user2);
      insert( &userTreeNode, user3);

     inorderPrint(  userTreeNode);
//     void preorderPrint(  UserTreeNode * userTreeNode);
//     void postorderPrint(  UserTreeNode * userTreeNode);
//     User *minimum (UserTreeNode *userTreeNode);
//     User *maximum (UserTreeNode *userTreeNode);
//     UserTreeNode *delete(UserTreeNode **userTreeNode, int a );
//     void  destroy (UserTreeNode **userTreeNode);


 }

