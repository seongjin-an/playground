#ifndef _ARRAY_STACK_H_
#define _ARRAY_STACK_H_

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
    ElementType Data;
} Node;

typedef struct tagArrayStack {
    int Capacity;
    int Top;
    Node* Nodes;
} ArrayStack2;

void AS_CreateStack(ArrayStack2** Stack, int Capacity);
void AS_DestroyStack(ArrayStack2* Stack);
void AS_Push(ArrayStack2* Stack, ElementType Data);
ElementType AS_Pop(ArrayStack2* Stack);
ElementType AS_Top(ArrayStack2* Stack);
int AS_GetSize(ArrayStack2* Stack);
int AS_IsEmpty(ArrayStack2* Stack);

#endif