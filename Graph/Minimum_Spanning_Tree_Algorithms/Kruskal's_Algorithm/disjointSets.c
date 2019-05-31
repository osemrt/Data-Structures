#include "header_files/declarations.h"

/**
*	Returns the root of the group that "x" is part of it
*	@param int*set the address of the set
*	@param int x the index of a member in the set
*	@return the root index of "x"
*/

int find(int* set, int u) {

	int x = u;
	while (set[x] > 0)
		x = set[x];
	return x;


}

/**
*	Takes the roots of two sets and merges the second one with the first one
*	@param int*set the address of the set
*	@param int u the root index of the first set 
*	@param int v the root index of the second set 
*/

void merge(int* set, int u, int v) {
	if (set[u] < set[v]) {
		set[v] += set[u];
		set[u] = v;
	}
	else {
		set[u] += set[v];
		set[v] = u;
	}
}