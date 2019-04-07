#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main() {

	char* text = "NEEDL! FIND A NEEDLE IN A HAYSTACK!";
	char* pattern = "NEEDLE";

	int M = strlen(text);
	int N = strlen(pattern);
	int found = FALSE;
	int i = 0, j;

	while ((!found) && (i <= M - N)) {
		j = 0;

		while (text[i + j] == pattern[j])
			j++;

		if (j == strlen(pattern))
			found = TRUE;
	
		i++;
	}

	if (found)
		printf("Found at the %d index! %s", i, &text[i-1]);

	return 0;
}