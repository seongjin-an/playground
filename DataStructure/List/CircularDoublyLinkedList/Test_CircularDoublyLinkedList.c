#include "CircularDoublyLinkedList.h"

int main(void) 
{
    int i = 0;
    int Count = 0;
    Node* List = NULL;
    Node* NewNode = NULL;
    Node* Current = NULL;

    for (i = 0; i < 5; i++)
    {
        NewNode = CDLL_CreateNode(i);
        CDLL_AppendNode(&List, NewNode);
    }
    CDLL_PrintAllNode(List);

    printf("\nInserting 3000 After[2]...\n");

    Current = CDLL_GetNodeAt(List, 2);
    NewNode = CDLL_CreateNode(3000);
    CDLL_InsertAfter(Current, NewNode);
    printf("\nRemoving Node At 2...\n");
    Current = CDLL_GetNodeAt(List, 2);
    CDLL_RemoveNode(&List, Current);
    CDLL_DestroyNode(Current);
    CDLL_PrintAllNode(List);

    printf("\nDestroying List...\n");
    for (i = 0; i < CDLL_GetNodeCount(List); i++) 
    {
        Current = CDLL_GetNodeAt(List, 0);
        if (Current != NULL)
        {
            CDLL_RemoveNode(&List, Current);
            CDLL_DestroyNode(Current);
        }
    }
    return 0;
}