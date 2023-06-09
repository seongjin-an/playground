#include "ArrayStack.h"

void AS_CreateStack(ArrayStack2** Stack, int Capacity) 
{
    // 스택을 자유 저장소에 생성
    (*Stack) = (ArrayStack2*)malloc(sizeof(ArrayStack2));

    // 입력된 Capacity만큼 노드를 자유 저장소에 생성
    (*Stack)->Nodes = (Node*)malloc(sizeof(Node) * Capacity);

    // Capacity 및 Top 초기화
    (*Stack)->Top = -1;
    (*Stack)->Capacity = Capacity;
}

void AS_DestroyStack(ArrayStack2* Stack)
{
    // 노드를 자유 저장소에서 해제
    free(Stack->Nodes);

    // 스택을 자쥬 저장소에서 해제
    free(Stack);
}

void AS_Push(ArrayStack2* Stack, ElementType Data) 
{
    Stack->Top++;
    Stack->Nodes[Stack->Top].Data = Data;
}

ElementType AS_Pop(ArrayStack2* Stack)
{
    int Position = Stack->Top--;
    return Stack->Nodes[Position].Data;
}

ElementType AS_Top(ArrayStack2* Stack)
{
    return Stack->Nodes[Stack->Top].Data;
}

int AS_GetSize(ArrayStack2* Stack)
{
    return Stack->Top+1;
}

int AS_IsEmpty(ArrayStack2* Stack)
{
    return Stack->Top == -1;
}

