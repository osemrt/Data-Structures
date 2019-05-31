#include "header_files/declarations.h"


int breadthFirstSearch(int** graph, int numOfVertices, int startVertex) {

	int j, currentVertex;
	int* visited;

	visited = createFlagArray(numOfVertices, FALSE);
	Queue queue = createQueue();

	enQueue(&queue, startVertex);
	printf("\n%d ", startVertex);
	visited[startVertex] = TRUE;

	while (!isEmpty(&queue)) {
		
		deQueue(&queue, &currentVertex);
		for (j = 0; j < numOfVertices; j++) {

			if (graph[currentVertex][j] == 1 && visited[j] == FALSE) {
				printf("%d ", j);
				enQueue(&queue, j);
				visited[j] = TRUE;
			}

		}
	}



}