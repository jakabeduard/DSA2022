//
// Created by Last Gen Networks on 4/5/2022.
//
#include "user.h"
#ifndef DSA2022_USER_QUEUE_H
#define DSA2022_USER_QUEUE_H
typedef struct{
    int front;
    int rear;
    unsigned int size;
    User **users;
}UserQueue;

void createUserQueue(UserQueue **userQueue, unsigned int maxSize);
bool queueIsEmpty(UserQueue *userQueue);
bool queueIsFull(UserQueue *userQueue);
void enqueue(UserQueue* userQueue,User *user);
void dequeue(UserQueue* userQueue);
int findElementInQueue(UserQueue* userQueue, int userId);
void printQueue(UserQueue* userQueue, char*destination);
void deleteQueue(UserQueue** userQueue);

#endif //DSA2022_USER_QUEUE_H
