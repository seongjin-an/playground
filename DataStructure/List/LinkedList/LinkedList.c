#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

//struct Node {
//    ElementType Data;
//    struct Node* NextNode;
//};

typedef struct tagNode {
    ElementType Data;
    struct tagNode* NextNode;
} Node;

// 노드 생성
Node* SLL_CreateNode(ElementType NewData) {
    Node* NewNode = (Node*)malloc(sizeof(Node));
    NewNode->Data = NewData;
    NewNode->NextNode = NULL;

    return NewNode;
}

void SLL_DestroyNode(Node* Node) {
    free(Node);
}

void SLL_AppendNode(Node** Head, Node* NewNode) {
    if ((*Head) == NULL) {
        *Head = NewNode;
    } else {
        Node* Tail = (*Head);
        while (Tail->NextNode != NULL) {
            Tail = Tail->NextNode;
        }
        Tail->NextNode = NewNode;
    }
}

void print(Node** Head) {
    // do {
    //     ElementType el = (*Head)->Data;
    //     printf("elementType: %d\n", el);
    //     Head = &((*Head)->NextNode);
    // } while (*Head != NULL);
    do {
        ElementType el = (*Head)->Data;
        printf("elementType: %d\n", el);
        Head = &((*Head)->NextNode);
    } while ((*Head) != NULL);
}

int main() {
    Node* MyNode = SLL_CreateNode(117);
    free(MyNode);

    Node* List = NULL;
    Node* NewNode = NULL;
    NewNode = SLL_CreateNode(117);
    SLL_AppendNode(&List, NewNode);
    NewNode = SLL_CreateNode(119);
    SLL_AppendNode(&List, NewNode);
    NewNode = SLL_CreateNode(121);
    SLL_AppendNode(&List, NewNode);

    print(&List);
    while (List->NextNode != NULL) {
        NewNode = List;
        List = List->NextNode;
        free(NewNode);
    }
    free(List);
    return 0;
}