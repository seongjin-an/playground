#include "LinkedList.h"

// 순차탐색
Node* SLL_SequentialSearch(Node* Head, int Target) 
{
    Node* Current = Head;
    Node* Match = NULL;
    while (Current != NULL)
    {
        if (Current->Data == Target)
        {
            Match = Current;
            break;
        }
        else
        {
            Current = Current->NextNode;
        }
    }
    return Match;
}

int main() 
{
    Node* List = NULL;
    Node* NewNode = NULL;
    
    for (int i = 0; i < 10; i++)
    {
        NewNode = SLL_CreateNode(2 * i);
        SLL_AppendNode(&List, NewNode);
    }

    Node* FoundNode = SLL_SequentialSearch(List, 0);
    printf("FOUND!, %d\n", FoundNode->Data);

    for (int i = 0; i < 10; i++)
    {
        Node* Current = NULL;
        Current = SLL_GetNodeAt(List, 0);
        if (Current != NULL) 
        {
            SLL_RemoveNode(&List, Current);
            SLL_DestroyNode(Current);
        }
    }
        

    return 0;
}