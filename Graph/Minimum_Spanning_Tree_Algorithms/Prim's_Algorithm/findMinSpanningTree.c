#include "header_files/declarations.h"

int** findMinSpanningTree(int** graph, int numOfVertices) {

	int i, j, u, v, min = INT_MAX;
	int* near = createFlagArray(numOfVertices + 1, INT_MAX);
	int** minSpanningTree = createMatrix(3, numOfVertices - 1);

	//Finding the min edge
	//If it is a undirected graph, looking only either upper triangle or bottom triangle will be enough
	for (i = 1; i <= numOfVertices; i++) {
		for (j = i + 1; j <= numOfVertices; j++) {
			if (graph[i][j] < min) {
				u = i; v = j; min = graph[i][j];
			}
		}
	}

	minSpanningTree[0][0] = u;
	minSpanningTree[1][0] = v;
	minSpanningTree[2][0] = min;

	//Mark the vertices as included
	near[u] = near[v] = 0;
	
	//Remain edges are near to either of u or v
	for (i = 0; i <= numOfVertices; i++) {
		if (near[i] != 0) {
			if (graph[u][i] < graph[v][i])
				near[i] = u;
			else
				near[i] = v;
		}
	}

	
	for (j = 1; j < numOfVertices - 1; j++) {
	
		min = INT_MAX;
		for (i = 1; i <= numOfVertices; i++) {
			if (near[i] != 0 && graph[i][near[i]] < min) {
				u = i; v = near[i]; min = graph[i][near[i]];
			}
		}
	
		minSpanningTree[0][j] = u;
		minSpanningTree[1][j] = v;
		minSpanningTree[2][j] = min;
		near[u] = 0;

		for (i = 1; i <= numOfVertices; i++) {
			if (near[i] != 0 && graph[u][i] < graph[near[i]][i])
				near[i] = u;
		}
	
	}

	return minSpanningTree;

}