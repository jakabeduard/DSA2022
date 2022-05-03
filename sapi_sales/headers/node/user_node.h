//
// Created by Last Gen Networks on 5/3/2022.
//

#ifndef DSA2022_USER_NODE_H
#define DSA2022_USER_NODE_H
#include "user.h"
typedef  struct  UsedNode{
    User *userValue;
    struct UsedNode *next;
}UserNode;



void createUserNode(UserNode **userNode, User  *userValue);
void printUserNode(UserNode * userNode, char destination );
int findeElementsInList(UserNode *userNode, int id);
void insertFirst(UserNode **userNode, User *userValue);
void insertLast(UserNode *userNode, User *userValue);
User *removeFirst(UserNode **userNode );
User *removeLast(UserNode **userNode );
void deleteUserList(UserNode **userNode);


#endif //DSA2022_USER_NODE_H
