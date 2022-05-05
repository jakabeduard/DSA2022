// Created by Last Gen Networks on 5/3/2022.
//

#ifndef DSA2022_USER_BST_H
#define DSA2022_USER_BST_H
#include "user.h"
typedef struct  UserTreeNode{
    User  *info;
    struct UserTreeNode *left , *right;
}UserTreeNode;

void createTree( UserTreeNode ** userTreeNode);
void insert( UserTreeNode ** userTreeNode, User *user);
bool search( UserTreeNode * userTreeNode, int inf );
void inorderPrint(  UserTreeNode * userTreeNode);
void preorderPrint(  UserTreeNode * userTreeNode);
void postorderPrint(  UserTreeNode * userTreeNode);
User *minimum (UserTreeNode *userTreeNode);
User *maximum (UserTreeNode *userTreeNode);
UserTreeNode *delete(UserTreeNode **userTreeNode, int a );
void  destroy (UserTreeNode **userTreeNode);



#endif //DSA2022_USER_BST_H
