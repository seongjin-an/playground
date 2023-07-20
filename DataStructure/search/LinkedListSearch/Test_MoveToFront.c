#include "LinkedList.h"

Node* SLL_MoveToFront(Node** Head, int Target)
{
    Node* Current = (*Head);
    Node* Previous = NULL;
    Node* Match = NULL;
    while (Current != NULL)
    {
        if (Current->Data == Target)
        {
            Match = Current;
            if (Previous != NULL) 
            {
                Previous->NextNode = Current->NextNode;
                Current->NextNode = (*Head);
                (*Head) = Current;
            }
            break;
        }
        else 
        {
            Previous = Current;
            Current = Current->NextNode;
        }
    }
    return Match;
}

int main()
{
    Node* List = NULL;
    Node* Current = NULL;

    for (int i = 0; i < 10; i++)
    {
        Current = SLL_CreateNode(i);
        SLL_AppendNode(&List, Current);
    }

    SLL_MoveToFront(&List, 4);

    for (int i = 0; i < 10; i++)
    {
        Current = SLL_GetNodeAt(List, i);
        printf("%d ", Current->Data);
    }

    for (int i = 0; i < 10; i++)
    {
        Current = SLL_GetNodeAt(List, i);
        if (Current != NULL)
        {
            SLL_RemoveNode(&List, Current);
            SLL_DestroyNode(Current);
        }
    }
    return 0;
}