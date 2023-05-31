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

int main() {
    Node* MyNode = SLL_CreateNode(117);
    printf("%d\n", MyNode->Data);
    free(MyNode);
    return 0;
}