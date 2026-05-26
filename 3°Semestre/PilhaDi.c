/*
Pilha Dinâmica
*/
#include <stdlib.h>
#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node Node;

typedef struct 
{
    Node *top;
    int size;
} Stack;

void initialize(Stack *stack)
{   
    stack->top = NULL;
    stack->size = 0;
}


int is_empty(Stack *stack)
{   
    return stack->size == 0;

}


void push(Stack *stack, int value)
{   

}


void pop(Stack *stack)
{   

}
int peek(Stack *stack)
{   

}

int main()
{
    Stack stack;
    initialize(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    pop(&stack);
    push(&stack, 40);
    pop(&stack);
    push(&stack, 50);
    printf("O VALOR TOPO É: %i\n",peek(&stack));
    printf(&stack);

}