#ifndef MST_H
#define MST_H

#include "Graph.h"
#include "PriorityQueue.h"
#include "DisjointSet.h"

#define MAX_WEIGHT 36267;

// 프림 알고리즘 : 최소 신장 트리
void Prim(Graph* G, Vertex* StartVertex, Graph* MST);
// 크루스칼 알고리즘 : 최소 신장 트리
void Kruskal(Graph* G, Graph* MST);

#endif