#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

typedef char ElementType;

typedef struct tagSBTNode
{
    struct tagSBTNode* Left;
    struct tagSBTNode* Right;

    ElementType Data;
} SBTNode;

SBTNode* SBT_CreateNode(ElementType NewData);
void SBT_DestroyNode(SBTNode* Node);
void SBT_DestroyNode(SBTNode* Root);

void SBT_PreorderPrintTree(SBTNode* Node);
void SBT_InorderPrintTree(SBTNode* Node);
void SBT_PostorderPrintTree(SBTNode* Node);

#endif