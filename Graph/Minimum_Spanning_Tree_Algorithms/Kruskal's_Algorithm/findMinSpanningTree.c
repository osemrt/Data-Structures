#include "header_files/declarations.h"

int** findMinSpanningTree(int** edgeList, int numOfEdges, int numOfVertices) {

	int* includedEdges = createFlagArray(numOfEdges, FALSE);
	int** spanningTree = createMatrix(3, numOfVertices - 1);
	int* set = createFlagArray(numOfVertices, -1);

	int k, i=0, j = 0, min, u, v;

	while (i < numOfVertices) {

		//Find the min-weighted edge
		min = INT_MAX;
		for (j = 0; j < numOfEdges; j++) {
			if (includedEdges[j] == FALSE && edgeList[j][2]<min) {
				min = edgeList[j][2]; 
				k = j; u = edgeList[k][0]; v = edgeList[k][1];
			}
		}

		includedEdges[k] = TRUE;

		if (find(set, u) != find(set, v)) {
			spanningTree[0][i] = u;
			spanningTree[1][i] = v;
			spanningTree[2][i] = min;
			merge(set, find(set, u), find(set, v));
			i++;
		}

	}

	return spanningTree;
}