#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;

typedef struct tagSBTNode
{
    struct tagSBTNode* Left;
    struct tagSBTNode* Right;

    ElementType Data;
} SBTNode;

SBTNode* SBT_CreateNode(ElementType NewData);
void SBT_DestroyNode(SBTNode* Node);
void SBT_DestroyTree(SBTNode* Root);

void SBT_PreorderPrintTree(SBTNode* Node);
void SBT_InorderPrintTree(SBTNode* Node);
void SBT_PostorderPrintTree(SBTNode* Node);

#endif
/*
Preorder(전위 순회) : 뿌리 -> 왼쪽하위 -> 오른쪽하위
Inorder(중위 순회) : 왼쪽하위 -> 뿌리 -> 오른쪽하위
Postorder(후위 순회) : 왼쪽하위 -> 오른쪽하위 -> 뿌리
*/