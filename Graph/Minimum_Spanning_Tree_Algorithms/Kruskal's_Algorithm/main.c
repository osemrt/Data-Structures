#include "header_files/declarations.h"

int main() {


	int edge[9][3] = { {1,2,28},
					   {1,6,10},
					   {2,3,16},
					   {2,7,14},
					   {3,4,12},
					   {4,5,22},
					   {4,7,18},
					   {5,6,25},
					   {5,7,24} };

	int** edgeList = createMatrix(9, 3);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 3; j++) {
			edgeList[i][j] = edge[i][j];
		}
	}
	
	int** spanningTree = findMinSpanningTree(edgeList, 9, 6);
	printSpanningTree(spanningTree, 6);


	return 0;
}