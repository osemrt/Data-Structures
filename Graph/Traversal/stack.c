#include "header_files/declarations.h"

Stack createStack() {
	Stack stack;
	stack.top = -1;
	return stack;
}

int push(Stack* stack, int x) {
	if (!_isFull(stack)) {
		stack->items[++stack->top] = x;
		return TRUE;
	}
	return FALSE;
}

int pop(Stack* stack, int* x) {
	if (!_isEmpty(stack)) {
		*x = stack->items[stack->top--];
		return TRUE;
	}
	return FALSE;
}

int peek(Stack* stack, int* x) {
	if (!_isEmpty(stack)) {
		*x = stack->items[stack->top];
		return TRUE;
	}
	return FALSE;
}

int _isEmpty(Stack* stack) {
	return stack->top == -1 ? TRUE : FALSE;
}

int _isFull(Stack* stack) {
	return stack->top + 1 == MAX_SIZE ? TRUE : FALSE;
}

int printStack(Stack* stack) {
	printf("\nPrinting the stack...");
	if (!_isEmpty(stack)) {
		int temp = stack->top;
		printf("\ntop-> [ ");
		for (int i = temp; i >= 0; i--) {
			printf("%d ", stack->items[i]);
		}
		printf("]\n");
		return TRUE;
	}
	else {
		printf("\nEmpty stack!\n");
		return FALSE;
	}
	
}