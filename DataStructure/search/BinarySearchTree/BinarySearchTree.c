#include "BinarySearchTree.h"

BSTNode* BST_CreateNode(ElementType NewData)
{
    BSTNode* NewNode = (BSTNode*)malloc(sizeof(BSTNode));
    NewNode->Left = NULL;
    NewNode->Right = NULL;
    NewNode->Data = NewData;
    return NewNode;
}

void BST_DestroyNode(BSTNode*Node)
{
    free(Node);
}

void BST_DestroyTree(BSTNode* Tree)
{
    if (Tree->Right != NULL)
        BST_DestroyTree(Tree->Right);
    
    if (Tree->Left != NULL)
        BST_DestroyTree(Tree->Left);
    
    Tree->Left = NULL;
    Tree->Right = NULL;
    BST_DestroyNode(Tree);
}

BSTNode* BST_SearchNode(BSTNode* Tree, ElementType Target)
{
    if (Tree == NULL)
        return NULL;

    if (Tree->Data == Target)
        return Tree;
    else if (Tree->Data > Target)
        return BST_SearchNode(Tree->Left, Target);
    else 
        return BST_SearchNode(Tree->Right, Target);
}

BSTNode* BST_SearchMinNode(BSTNode* Tree)
{
    if (Tree == NULL)
        return NULL;
    
    if (Tree->Left == NULL)
        return Tree;
    else
        return BST_SearchMinNode(Tree->Left);
}

void BST_InsertNode(BSTNode* Tree, BSTNode *Child)
{
    if (Tree->Data < Child->Data)
    {
        if (Tree->Right == NULL)
            Tree->Right = Child;
        else
            BST_InsertNode(Tree->Right, Child);
    } else if (Tree->Data > Child->Data)
    {
        if (Tree->Left == NULL)
            Tree->Left = Child;
        else
            BST_InsertNode(Tree->Left, Child);
    }
}

BSTNode* BST_RemoveNode(BSTNode* Tree, BSTNode* Parent, ElementType Target)
{
    BSTNode* Removed = NULL;

    if (Tree == NULL)
        return NULL;
    printf("checkpoint000\n");
    if (Tree->Data > Target) 
    {
        printf("checkpoint001\n");
        Removed = BST_RemoveNode(Tree->Left, Tree, Target);
    }
    else if (Tree->Data < Target)
    {
        printf("checkpoint002\n");
        Removed = BST_RemoveNode(Tree->Right, Tree, Target);
    }
    else // 목표를 찾음
    {
        Removed = Tree;
        printf("checkpoint0\n");
        // 잎 노드인 경우 바로 삭제
        if (Tree->Left == NULL && Tree->Right == NULL)
        {
            printf("checkpoint1\n");
            if (Parent->Left == Tree)
                Parent->Left = NULL;
            else
                Parent->Right = NULL;
        }
        else
        {
            printf("checkpoint2\n");
            // 자식이 양쪽 다 있는 경우
            if (Tree->Left != NULL && Tree->Right != NULL)
            {
                printf("checkpoint3\n");
                // 최솟갑 노드를 찾아 제거한 뒤 현재의  노드에 위치시킨다.
                BSTNode* MinNode = BST_SearchMinNode(Tree->Right);
                MinNode = BST_RemoveNode(Tree, NULL, MinNode->Data);
                Tree->Data = MinNode->Data;
            }
            else
            {
                printf("checkpoint4\n");
                // 자식이 한쪽만 있는 경우
                BSTNode* Temp = NULL;
                if (Tree->Left != NULL)
                    Temp = Tree->Left;
                else
                    Temp = Tree->Right;
                
                if (Parent->Left == Tree)
                {
                    printf("checkpoint5\n");
                    Parent->Left = Temp;
                }
                else
                {
                    printf("checkpoint\n");
                    Parent->Right = Temp;
                }
            }
        }
    }
    return Removed;
}

void BST_InorderPrintTree(BSTNode* Node)
{
    if (Node == NULL)
        return;
    
    // 왼쪽 하위 트리 출력
    BST_InorderPrintTree(Node->Left);

    // 뿌리 노드 출력
    printf("%d ", Node->Data);

    // 오른쪽 하위 트리 출력
    BST_InorderPrintTree(Node->Right);
}