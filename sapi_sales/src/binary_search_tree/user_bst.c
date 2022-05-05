//
// Created by Last Gen Networks on 5/3/2022.
//

#include "../../headers/binary_search_tree/user_bst.h"
void createTree( UserTreeNode ** userTreeNode){
    (*userTreeNode) = ( UserTreeNode *)
            (malloc(sizeof(UserTreeNode)));
    if (!(*userTreeNode)) {
        printErrorMassage(MEMORY_ALLOCATION);
    }
    (*userTreeNode)->left = NULL;
    (*userTreeNode)->right = NULL;
}

void insert( UserTreeNode ** userTreeNode, User *user){
    if((*userTreeNode) == NULL)
    {
        createTree(&(*userTreeNode));
        (*userTreeNode)->info=user;
    }
    else
    {
        if((*userTreeNode)->info > user)
            insert(&((*userTreeNode)->left),user);
        else insert(&((*userTreeNode)->right),user);
    }
}
bool search( UserTreeNode * userTreeNode, int inf ){
    if(!userTreeNode){
        return false;
    }
    else{
        if(inf<userTreeNode->info){
            search(userTreeNode->left,inf);
        }
        else{
            if(inf>userTreeNode->info){
                search(userTreeNode->right,inf);
            }
            else{
                return true;
            }
        }
    }
}
void inorderPrint(  UserTreeNode * userTreeNode){
    if(userTreeNode->left )
        inorderPrint(userTreeNode->left);
   printUser(userTreeNode,CON);
    if(userTreeNode->right)
        inorderPrint(userTreeNode->right);

}
void preorderPrint(  UserTreeNode * userTreeNode){
    printUser(userTreeNode,CON);
    if(userTreeNode->left){
        preorderPrint(userTreeNode->left);
    }

    if(userTreeNode->right){
        preorderPrint(userTreeNode->right);
    }

}


void postorderPrint(  UserTreeNode * userTreeNode){
    if(userTreeNode->left)
        postorderPrint(userTreeNode->left);
    if(userTreeNode->right)
        postorderPrint(userTreeNode->right);
    printUser(userTreeNode,CON);
}
User *minimum (UserTreeNode *userTreeNode){

}
User *maximum (UserTreeNode *userTreeNode){

}
UserTreeNode *delete(UserTreeNode **userTreeNode, int a ){
    free(userTreeNode);

}
void  destroy (UserTreeNode **userTreeNode){


}

