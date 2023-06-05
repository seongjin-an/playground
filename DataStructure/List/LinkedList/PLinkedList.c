#include <stdio.h>
#include <stdlib.h>

// 데이터 타입
typedef int ElementType;

//struct Node {
//    ElementType Data;
//    struct Node* NextNode;
//};

// 노드 구조체
typedef struct tagNode {
    ElementType Data;
    struct tagNode* NextNode;
} Node;

// 노드 생성 연산 Singly Linked List
Node* SLL_CreateNode(ElementType NewData) {
    Node* NewNode = (Node*)malloc(sizeof(Node));
    NewNode->Data = NewData;
    NewNode->NextNode = NULL;

    return NewNode;
}

// 노드 소멸 연산
void SLL_DestroyNode(Node* Node) {
    free(Node);
}

/*
    노드 추가 연산
    SLL_AppendNode 에서 왜 Node** Head 인가?
    만약 Node* 라면, List 포이터가 담고 있는 주소값만 Head에 복사되고, 정작 List 포인터 변수의 주소는 전달되지 않음.
    SLL_AppendNode() 함수가 호출된 후에는 매개변수 Head 는 자동 메모리에 의해 제거되고 List 는 여전히 NNULL 인 채로 남는다.
    따라서 포인터가 가진 값이 아닌, 포인터 자신의 주소를 넘겨야 한다. 
*/
void SLL_AppendNode( Node** Head, Node* NewNode ) {
    if ( (*Head) == NULL ) 
    {
        *Head = NewNode;
    } else {
        Node* Tail = (*Head);
        while ( Tail->NextNode != NULL ) 
        {
            Tail = Tail->NextNode;
        }
        Tail->NextNode = NewNode;
    }
}


/*
    노드 탐색 연산
    링크드 리스트에게 노드 탐색 연산은 아픈 손가락이다. 배열에서는 어떤 위치에 있는 요소를 취하고 싶을 때 해당 요소의 첨자를 입력하면
    바로 해당 요소에 접근할 수 있다. 이에 반해, 링크드 리스트는 헤드부터 시작해서 다음 노드에 대한 포인터를 징검다리 삼아 차근차근 노드의
    개수만큼 거쳐야만 원하는 요소에 접근할 수 있다. 찾고자 하는 요소가 N번째에 있다면 N-1 개의 노드를 거쳐야 하는 것이다.
*/
Node* SLL_GetNodeAt(Node* Head, int Location) {
    Node* Current = Head;
    while ( Current != NULL && (--Location) >= 0 ) 
    {
        Current = Current -> NextNode;
    }
    return Current;
}

/*
    노드 삭제 연산
    노드 삭제 연산은 링크드 리스트 내 임의의 노드를 제거하는 연산이다. 삭제하고자 하는 노드를 찾은 후 해당 노드의 다음 노드를 이전 노드의
    NextNode 포인터에 연결하면 그 노드를 삭제할 수 있다. 
*/
void SLL_RemoveNode(Node** Head, Node* Remove) {
    if ( *Head == Remove )
    {
        *Head = Remove->NextNode;
    }
    else 
    {
        Node* Current = *Head;
        while ( Current != NULL && Current->NextNode != Remove )
        {
            Current = Current->NextNode;
        }

        if ( Current != NULL )
            Current->NextNode = Remove->NextNode;
    }
}

/*
    노드 삽입 연산
*/
void SLL_InsertAfter(Node* Current, Node* NewNode) {
    NewNode->NextNode= Current->NextNode;
    Current->NextNode = NewNode;
}
/*
    노드 개수 세기 연산
*/
int SLL_GetNode(Node* Head) {
    int Count = 0;
    Node* Current = Head;

    while ( Current != NULL ) 
    {
        Current = Current->NextNode;
        Count++;
    }
    return Count;
}


// void print(Node** Head) {
//     // do {
//     //     ElementType el = (*Head)->Data;
//     //     printf("elementType: %d\n", el);
//     //     Head = &((*Head)->NextNode);
//     // } while (*Head != NULL);
//     if (Head == NULL) {
//         printf("null...");
//         return;
//     }
//     do {
//         ElementType el = (*Head)->Data;
//         printf("elementType: %d\n", el);
//         Head = &((*Head)->NextNode);
//     } while ((*Head) != NULL);
// }

void print(Node* Head) {
    while (Head != NULL) {
        printf("print2 %d\n", Head->Data);
        Head = Head->NextNode;
    }
}

int main() {
    // List, NewNode 
    Node* List = NULL;
    Node* NewNode = NULL;
    // 생성 및 추가.
    NewNode = SLL_CreateNode(117);
    SLL_AppendNode(&List, NewNode);
    NewNode = SLL_CreateNode(119);
    SLL_AppendNode(&List, NewNode);
    NewNode = SLL_CreateNode(121);
    SLL_AppendNode(&List, NewNode);
    // 출력
    print(List);
    printf("\n");

    Node * MyNode = NULL;
    MyNode = SLL_GetNodeAt(List, 1);
    printf("SLL_GetNodeAt(List, 1): %d\n", MyNode->Data);

    SLL_RemoveNode(&List, MyNode);
    SLL_DestroyNode(MyNode);
    printf("AFTER SLL_RemoveNode()\n");
    print(List);

    while (List->NextNode != NULL) 
    {
        NewNode = List;
        List = List->NextNode;
        SLL_DestroyNode(NewNode);

    }
    // SLL_DestroyNode(NewNode);
    SLL_DestroyNode(List);
    
    return 0;
}