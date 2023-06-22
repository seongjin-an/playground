#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tagNode 
{
    char* Data;
    struct tagNode* NextNode;
} Node;

typedef struct tagLinkedQueue
{
    Node* Front;
    Node* Rear;
    int Count;
} LinkedQueue2;

void LQ_CreateQueue(LinkedQueue2** Queue);
void LQ_DestroyQueue(LinkedQueue2* Queue);

Node* LQ_CreateNode(char* Data);
void LQ_DestroyNode(Node* _Node);

void LQ_Enqueue(LinkedQueue2* Queue, Node* NewNode);
Node* LQ_Dequeue(LinkedQueue2* Queue);

int LQ_IsEmpty(LinkedQueue2* Queue);

#endif