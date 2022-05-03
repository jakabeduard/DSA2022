//
// Created by Last Gen Networks on 4/5/2022.
//

#include "queue/user_queue.h"
void createUserQueue(UserQueue **userQueue, unsigned int maxSize){
    (*userQueue)=malloc(sizeof (userQueue));

    if (!(&userQueue)){printErrorMassage(MEMORY_ALLOCATION);}
    (*userQueue)->size=maxSize;
    (*userQueue)->front=-1;
    (*userQueue)->rear=-1;
    (*userQueue)->users=(User**) malloc(maxSize*sizeof (User*));

    for (int i = 0; i < maxSize; ++i) {
      createUser(&(*userQueue)->users[i]);
    }
    for (int i = 0; i < maxSize; ++i) {
        (*userQueue)->users[i]=NULL;
    }


}
bool queueIsEmpty(UserQueue *userQueue) {
    if (userQueue!=NULL){
        return userQueue->front==-1;
    }

}
bool queueIsFull(UserQueue *userQueue){

    if (userQueue!=NULL){
        return userQueue->rear==userQueue->size-1;
    }
}
void enqueue(UserQueue* userQueue,User *user){
if(!queueIsFull(userQueue)){
    if(userQueue->front==-1){
        userQueue->front++;
    }
    userQueue->rear++;
    userQueue->users[userQueue->rear]==user;

}
else{
        printf("Queue is full");
}

}
void dequeue(UserQueue* userQueue){
    if (!queueIsEmpty(userQueue)){
//        printf("The  deleted elements is :");
//        printUser((userQueue->users[userQueue->front]);
        userQueue->front++;
    }
}
int findElementInQueue(UserQueue* userQueue, int userId){
    for (int i = userQueue->front; i < userQueue->rear; ++i) {
        if (userQueue->users[i]->id ==userId){
            return i;}

    }

}
void printQueue(UserQueue* userQueue, char*destination){
    freopen( destination , "w", stdout);
    for (int i = userQueue->front; i < userQueue->rear; ++i) {
        printUser(userQueue->users[i],"CON");

    }

}
void deleteQueue(UserQueue** userQueue){

}