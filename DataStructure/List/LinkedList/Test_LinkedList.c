#include "LinkedList.h"

int main(void) {
    int i = 0;
    int Count = 0;
    Node* List = NULL;
    Node* Current = NULL;
    Node* NewNode = NULL;

    // 노드 5개 추가
    for (i = 0; i < 5; i++) {
        NewNode = SLL_CreateNode(i);
        SLL_AppendNode(&List, NewNode);
    }

    NewNode = SLL_CreateNode(-1);
    SLL_InsertNewHead(&List, NewNode);

    NewNode = SLL_CreateNode(-2);
    SLL_InsertNewHead(&List, NewNode);

    SLL_PrintNodes(List);

    printf("\nInserting 3000 After [2]...\n\n");

    Current = SLL_GetNodeAt(List, 2);
    NewNode = SLL_CreateNode(3000);
    SLL_InsertAfter(Current, NewNode);
    SLL_PrintNodes(List);

    printf("\nDestroying List...\n");

    for (int i = 0; i < SLL_GetNodeCount(List); i++) {
        Current= SLL_GetNodeAt(List, 0);
        if ( Current != NULL) {
            SLL_RemoveNode(&List, Current);
            SLL_DestroyNode(Current);
        }
    }
    

    return 0;
}