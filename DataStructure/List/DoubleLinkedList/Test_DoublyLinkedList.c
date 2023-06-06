#include "DoublyLinkedList.h"

int main(void) 
{   
    int i = 0;
    int Count = 0;
    Node* List = NULL;
    Node* NewNode = NULL;
    Node* Current = NULL;
    
    for (i = 0; i < 5; i++) 
    {
        NewNode = DLL_CreateNode(i);
        DLL_AppendNode(&List, NewNode);   
    }
    // 리스트 출력
    PrintAllNode(List);
    
    // 리스트의 세 번째 칸 뒤에 노드 삽입
    printf("\nInserting 3000 After [2]...\"\n");
    Current = DLL_GetNodeAt(List, 2);
    NewNode = DLL_CreateNode(3000);
    DLL_InsertAfter(Current, NewNode);

    PrintAllNode(List);

    // printf("\nDestroyingList...\n");

    for (i = 0; i < DLL_GetNodeCount(List); i++)
    {
        Current = DLL_GetNodeAt(List, 0);
        if (Current != NULL)
        {
            DLL_RemoveNode(&List, Current);
            DLL_DestroyNode(Current);
        }
    }
    return 0;
}