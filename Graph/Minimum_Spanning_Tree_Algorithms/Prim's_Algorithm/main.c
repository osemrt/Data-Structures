#include "header_files/declarations.h"
#define I INT_MAX

int main() {

	int cost[][8] =
	{ {I,I,I,I,I,I,I,I},
	{I,I,25,I,I,I,5,I},
	{I,25,I,12,I,I,I,10},
	{I,I,12,I,8,I,I,I},
	{I,I,I,8,I,16,I,14},
	{I,I,I,I,16,I,20,18},
	{I,5,I,I,I,20,I,I},
	{I,I,10,I,14,18,I,I} };

	int** graph = createMatrix(8, 8);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			graph[i][j] = cost[i][j];
		}
	}

	//skip the first column and row
	int** spanningTree = findMinSpanningTree(graph, 7);

	printSpanningTree(spanningTree, 7);

	return 0;
}