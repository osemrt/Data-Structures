#pragma once

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define MAX_SIZE 5

typedef struct {
	int top;
	int items[MAX_SIZE];
}Stack;

typedef struct {
	int front;
	int rear;
	int items[MAX_SIZE];
}Queue;