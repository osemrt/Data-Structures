#pragma once

#include "common.h"

//Disjoin sets functions
int find(int* set, int u);
void merge(int* set, int u, int v);


int* createFlagArray(int size, int flag);
int** createMatrix(int numOfRow, int numOfColumn);
void printSpanningTree(int** spanningTree, int numOfVertices);
int** findMinSpanningTree(int** edgeList, int numOfEdges, int numOfVertices);