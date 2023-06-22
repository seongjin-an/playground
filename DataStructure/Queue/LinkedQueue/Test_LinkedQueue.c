#include "LinkedQueue.h"

int main(void)
{
    Node* Popped;
    LinkedQueue2* Queue;

    LQ_CreateQueue(&Queue);

    LQ_Enqueue(Queue,LQ_CreateNode("abc"));
    LQ_Enqueue(Queue,LQ_CreateNode("def"));
    LQ_Enqueue(Queue,LQ_CreateNode("ghi"));
    LQ_Enqueue(Queue,LQ_CreateNode("jkl"));

    printf("Queue Size : %d\n",Queue->Count);

    while (LQ_IsEmpty(Queue) == 0)
    {
        Popped = LQ_Dequeue(Queue);
        printf("Dequeue : %s\n", Popped->Data);
        LQ_DestroyNode(Popped);
    }
    LQ_DestroyQueue(Queue);
    return 0;
}