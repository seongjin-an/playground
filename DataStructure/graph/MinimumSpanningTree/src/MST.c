#include "MST.h"

// G는 원본 그래프, StartVertex는 그래프의 시작 정점, MST는 최소 신장 트리가 될 그래프
void Prim(Graph* G, Vertex* StartVertex, Graph* MST)
{    
    int i = 0;
    PQNode StartNode = {0, StartVertex};
    PriorityQueue* PQ = PQ_Create(10);

    Vertex* CurrentVertex = NULL;
    Edge* CurrentEdge = NULL;

    int* Weights = (int*)malloc(sizeof(int) * G->VertexCount); // 각 정점으로 들어오는 간선중 가중치가 낮은 것이 할당됨
    Vertex** MSTVertices = (Vertex**)malloc(sizeof(Vertex*) * G->VertexCount); // MST 정점 리스트 역할을 함
    Vertex** Fringes = (Vertex**)malloc(sizeof(Vertex*) * G->VertexCount); // 다시 조사하는 경우가 없도록 방지하도록 함
    Vertex** Precedences = (Vertex**)malloc(sizeof(Vertex*) * G->VertexCount); // 각 정점으로 들어오는 간선중 가중치가 낮은 것이 채택되도록 담음

    CurrentVertex= G->Vertices;
    while (CurrentVertex != NULL)
    {
        Vertex* NewVertex = CreateVertex(CurrentVertex->Data);
        AddVertex(MST, NewVertex);

        Fringes[i] = NULL;
        Precedences[i] = NULL;
        MSTVertices[i] = NewVertex;
        Weights[i] = MAX_WEIGHT;
        CurrentVertex = CurrentVertex->Next;
        i++;
    }

    PQ_Enqueue(PQ, StartNode);
    Weights[StartVertex->Index] = 0;
    
    while (!PQ_IsEmpty(PQ))
    {
        PQNode Popped;
        
        PQ_Dequeue(PQ, &Popped);
        
        CurrentVertex = (Vertex*)Popped.Data;
        // printf("CurrentVertex->Data: %c / CurrentVertex->Index: %d\n", CurrentVertex->Data, CurrentVertex->Index);

        Fringes[CurrentVertex->Index] = CurrentVertex;

        CurrentEdge = CurrentVertex->AdjacencyList;
        while (CurrentEdge != NULL)
        {

            Vertex* TargetVertex = CurrentEdge->Target;
            
            if (Fringes[TargetVertex->Index] == NULL && CurrentEdge->Weight < Weights[TargetVertex->Index])
            {
                PQNode NewNode = {CurrentEdge->Weight, TargetVertex};
                PQ_Enqueue(PQ, NewNode);
                printf("CurrentVertext->Data: %c, TargetVertex->Data: %c, CurrentEdge->From->Data: %c\n", CurrentVertex->Data, TargetVertex->Data, CurrentEdge->From->Data);
                /*
                CurrentVertext->Data: B, TargetVertex->Data: A, CurrentEdge->From->Data: B
                CurrentVertext->Data: B, TargetVertex->Data: C, CurrentEdge->From->Data: B
                CurrentVertext->Data: B, TargetVertex->Data: F, CurrentEdge->From->Data: B
                CurrentVertext->Data: A, TargetVertex->Data: E, CurrentEdge->From->Data: A
                CurrentVertext->Data: C, TargetVertex->Data: D, CurrentEdge->From->Data: C
                CurrentVertext->Data: C, TargetVertex->Data: G, CurrentEdge->From->Data: C
                CurrentVertext->Data: F, TargetVertex->Data: E, CurrentEdge->From->Data: F
                CurrentVertext->Data: F, TargetVertex->Data: G, CurrentEdge->From->Data: F
                CurrentVertext->Data: F, TargetVertex->Data: H, CurrentEdge->From->Data: F
                CurrentVertext->Data: E, TargetVertex->Data: H, CurrentEdge->From->Data: E
                CurrentVertext->Data: G, TargetVertex->Data: I, CurrentEdge->From->Data: G

                A:0 / B:1 / C:2 / D:3 / E:4 / F:5 / G:6 / H:7 / I:8

1. CurrentVertext->Data: B, TargetVertex->Data: A, CurrentEdge->From->Data: B
Precedences[0] = B정점이 할당
Weights[0] = B->A의 가중치 할당(35)

2. CurrentVertext->Data: B, TargetVertex->Data: C, CurrentEdge->From->Data: B
Precedences[2] = B정점이 할당
Weights[2] = B->C의 가중치 할당(126)

3. CurrentVertext->Data: B, TargetVertex->Data: F, CurrentEdge->From->Data: B
Precedences[5] = B정점이 할당
Weights[5] = B->F의 가중치가 할당(150)

4. CurrentVertext->Data: A, TargetVertex->Data: E, CurrentEdge->From->Data: A
Precedences[4] = A정점이 할당
Weights[4] = A->E의 가중치 할당(247)

5. CurrentVertext->Data: C, TargetVertex->Data: D, CurrentEdge->From->Data: C
Precedences[3] = C정점 할당
Weights[3] = C->D의 가중치 할당(117)

6. CurrentVertext->Data: C, TargetVertex->Data: G, CurrentEdge->From->Data: C
Precedences[6] = C정점 할당
Weights[6] = C->G의 가중치 할당(220)

7. CurrentVertext->Data: F, TargetVertex->Data: E, CurrentEdge->From->Data: F
Precedences[4] = F정점 할당
Weights[4] = F->E가중치 할당(82), 이때 4번에서 E로 가는 가중치보다 낮음!

8. CurrentVertext->Data: F, TargetVertex->Data: G, CurrentEdge->From->Data: F
Precedences[6] = F정점 할당
Weights[6] = F->G가중치할당(154), 이때 6번에서 G로 가는 가중치보다 낮음!

9. CurrentVertext->Data: F, TargetVertex->Data: H, CurrentEdge->From->Data: F
Precedences[7] = F정점 할당
Weights[7] = F->H가중치할당(120)

10. CurrentVertext->Data: E, TargetVertex->Data: H, CurrentEdge->From->Data: E
Precedences[7] = E정점 할당
Weights[7] = E->H가중치할당(98), 이때 9번에서 H로 가능 가중치보다 낮음!

11. CurrentVertext->Data: G, TargetVertex->Data: I, CurrentEdge->From->Data: G
Precedences[8] = G정점 할당
Weights[8] = G->I가중치 할당(106)
                */
                Precedences[TargetVertex->Index] = CurrentEdge->From;
                Weights[TargetVertex->Index] = CurrentEdge->Weight;
            }

            CurrentEdge = CurrentEdge->Next;
        }
    }

    for (i = 0; i < G->VertexCount; i++)
    {
        int FromIndex, ToIndex;

        if (Precedences[i] == NULL)
            continue;
        FromIndex = Precedences[i]->Index;
        ToIndex = i;

        AddEdge(MSTVertices[FromIndex], CreateEdge(MSTVertices[FromIndex], MSTVertices[ToIndex], Weights[i]));

        AddEdge(MSTVertices[ToIndex], CreateEdge(MSTVertices[ToIndex], MSTVertices[FromIndex], Weights[i]));
    }

    free(Fringes);
    free(Precedences);
    free(MSTVertices);
    free(Weights);

    PQ_Destroy(PQ);
}

void Kruskal(Graph* G, Graph* MST)
{
    int i;
    Vertex* CurrentVertex = NULL;
    Vertex** MSTVertices = (Vertex**) malloc(sizeof(Vertex*) * G->VertexCount);
    DisjointSet** VertexSet = (DisjointSet**) malloc(sizeof(DisjointSet*) * G->VertexCount);

    PriorityQueue* PQ = PQ_Create(10);

    i = 0;
    CurrentVertex = G->Vertices;
    while (CurrentVertex != NULL)
    {
        Edge* CurrentEdge;

        VertexSet[i] = DS_MakeSet(CurrentVertex);
        MSTVertices[i] = CreateVertex(CurrentVertex->Data);
        AddVertex(MST, MSTVertices[i]);

        CurrentEdge = CurrentVertex->AdjacencyList;
        while (CurrentEdge != NULL)
        {
            PQNode NewNode = { CurrentEdge->Weight, CurrentEdge };
            PQ_Enqueue(PQ, NewNode); // 간선들 죄다 enqueue
            CurrentEdge = CurrentEdge->Next;
        }

        CurrentVertex = CurrentVertex->Next;
        i++;
    }

    while (!PQ_IsEmpty(PQ))
    {
        Edge* CurrentEdge;
        int FromIndex;
        int ToIndex;
        PQNode Popped;

        PQ_Dequeue(PQ, &Popped);
        CurrentEdge = (Edge*)Popped.Data;

        printf("%c - %c : %d\n", CurrentEdge->From->Data, CurrentEdge->Target->Data, CurrentEdge->Weight);

        FromIndex = CurrentEdge->From->Index;
        ToIndex = CurrentEdge ->Target->Index;

        if (DS_FindSet(VertexSet[FromIndex]) != DS_FindSet(VertexSet[ToIndex]))
        {
            AddEdge(MSTVertices[FromIndex], CreateEdge(MSTVertices[FromIndex], MSTVertices[ToIndex], CurrentEdge->Weight));
            AddEdge(MSTVertices[ToIndex], CreateEdge(MSTVertices[ToIndex], MSTVertices[FromIndex], CurrentEdge->Weight));
            DS_UnionSet(VertexSet[FromIndex], VertexSet[ToIndex]);
        }
    }
    for (i = 0; i < G->VertexCount; i++)
        DS_DestroySet(VertexSet[i]);
    free(VertexSet);
    free(MSTVertices);
}