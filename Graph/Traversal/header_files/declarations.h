#pragma once

#include "common.h"

//Stack functions
Stack createStack();
int push(Stack* stack, int x);
int pop(Stack* stack, int* x);
int peek(Stack* stack, int* x);
int _isEmpty(Stack* stack);
int _isFull(Stack* stack);
int printStack(Stack* stack);

//Queue functions
Queue createQueue();
int enQueue(Queue* queue, int x);
int deQueue(Queue* queue, int* x);
int getFront(Queue* queue, int* x);
int isEmpty(Queue* queue);
int isFull(Queue* queue);
int printQueue(Queue* queue);

//Other functions
int** createMatrix(int numOfRow, int numOfColumn);
int* createFlagArray(int size, int flag);
int depthFirstSearch(int** graph, int numOfVertices, int startVertex, int* visited);
//int depthFirstSearch(int** graph, int numOfVertices, int startVertex);
int breadthFirstSearch(int** graph, int numOfVertices, int startVertex);