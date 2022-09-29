// Create the behavior of a stack

/** Methods to define
 * push : add an element at the top of the stack
 * pop : remove an element from the top of the stack and return it
 * isEmpty : check if the stack is empty
 * isFull : check if the stack is full
 * peek : get the value of the top element without removing it
 * display : print the content of the stack to the console
 */

#include <stdio.h>
#include <stdbool.h>

#define STACK_LENGTH 5

typedef struct StackInt {
    int array[STACK_LENGTH];
    int topId;
} stackInt;

stackInt newEmptyStack() {
    stackInt stack;
    stack.topId = 0;
}

void display(stackInt stack) {
    for (int i = 0; i < STACK_LENGTH; i++) {
        printf("%d ", stack.array[i]);
    }
    printf("\n");
}

bool isEmpty(stackInt stack) {
    if (stack.topId == 0) {
        return true;
    }
    return false;
}

bool isFull(stackInt stack) {
    printf("%d\n", stack.topId);
    printf("%d\n", STACK_LENGTH);
    printf("%d\n", stack.topId == STACK_LENGTH);
    if (stack.topId == STACK_LENGTH) {
        return true;
    }
    return false;
}

void* push(stackInt *stack, int element) {
    if (true) {
        stack->array[stack->topId] = element;
        stack->topId += 1;
    } else {
        printf("Error : stack is already full");
    }
    return stack;
}

int main() {
    stackInt stack = newEmptyStack();
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    display(stack);

    return 0;
}