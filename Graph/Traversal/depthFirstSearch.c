#include "header_files/declarations.h"

int depthFirstSearch(int** graph, int numOfVertices, int startVertex, int* visited) {

	if (visited[startVertex] == FALSE) {
		
		printf("%d ", startVertex);
		visited[startVertex] = TRUE;

		for (int j = 0; j < numOfVertices; j++) {
			if (graph[startVertex][j] == 1 && visited[j] == FALSE) {
				depthFirstSearch(graph, numOfVertices, j, visited);
			}
		}
	}

}

/*
//Iterative DFS
int depthFirstSearch(int** graph, int numOfVertices, int startVertex) {

	Stack stack = createStack();
	int* visited = createFlagArray(numOfVertices, FALSE);
	int x;

	//printf("%d ", startVertex);
	visited[startVertex] = TRUE;
	push(&stack, startVertex);

	while (!_isEmpty(&stack)) {
		pop(&stack, &x);
		printf("%d ", x);

		for (int j = 0; j < numOfVertices; j++) {
			if (graph[x][j] == 1 && visited[j] == FALSE) {
				visited[j] = TRUE;
				push(&stack, j);
			}
		}
	}

}
*/