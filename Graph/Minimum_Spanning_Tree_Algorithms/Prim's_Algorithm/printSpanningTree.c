#include "header_files/declarations.h"

void printSpanningTree(int** spanningTree, int numOfVertices) {

	for (int i = 0; i < numOfVertices - 1; i++)
		printf("(%d, %d) : %d\n", spanningTree[0][i], spanningTree[1][i], spanningTree[2][i]);

}