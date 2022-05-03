//
// Created by Last Gen Networks on 5/3/2022.
//

#include "user_node.h"

void createUserNode(  UserNode **userNode, User  *userValue){
    (*userNode)=malloc( sizeof (UserNode));
    if (!(*userNode)){printErrorMassage(MEMORY_ALLOCATION);}
    (*userNode)->userValue=userValue;
    (*userNode)->next=NULL;
}

void printUserNode(UserNode * userNode, char destination ){
    UserNode  *p =userNode;
    while (p!=NULL){
        printUser(p->userValue, CON);
        p=p->next;
    }
}
int findeElementsInList(UserNode *userNode, int id){
 UserNode  *p=userNode; int index=0, position=-1;

    if (p!=NULL){
        if (userNode->userValue->id){
            position=index;
            return position;
        }
        p=p->next;
        index++;
    }
}
void insertFirst(UserNode **userNode, User *userValue){
    UserNode *newUserNode;

    createUserNode(&newUserNode, userValue);

    newUserNode->next=(*userNode);

    (*userNode)=newUserNode;

}
void insertLast(UserNode *userNode, User *userValue){
    UserNode  *newUserNode;
    createUserNode(newUserNode, userValue);///// nincs &, miert ?
    UserNode  *p=(userNode);
    while (p->next!=NULL){
        p=p->next;
    }
    p->next=newUserNode;
}
User *removeFirst(UserNode **userNode ){
    User *returnValue;
    UserNode  *next_node =NULL;
    if (*userNode==NULL){
        printErrorMassage(NULL_POINTER_EXCEPTION);
    }
    next_node=(*userNode)->next;
    returnValue=(*userNode)->userValue;
    free(*userNode);
    *userNode=next_node;
    return returnValue;

}
User *removeLast(UserNode **userNode ){
    User *returnValue;
    if((*userNode)->next==NULL){
        returnValue=(*userNode)->userValue;
        free(userNode);
        return returnValue;
    }
    UserNode  *current =userNode;
    while (current->next->next!=NULL){
       current= current->next;
    }
}
void deleteUserList(UserNode **userNode){
    while (*userNode){
        UserNode  *current=*userNode;
        (*userNode)=(*userNode)->next;
        deleteUser(&current->userValue);
        free(current);
    }
}
