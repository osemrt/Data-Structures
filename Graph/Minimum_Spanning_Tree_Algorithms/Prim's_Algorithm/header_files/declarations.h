#pragma once

#include "common.h"

int* createFlagArray(int size, int flag);
int** createMatrix(int numOfRow, int numOfColumn);
void printSpanningTree(int** spanningTree, int numOfVertices);
int** findMinSpanningTree(int** graph, int numOfVertices);