/*
Pilha Estática
*/
#include <stdlib.h>
#include <stdio.h>
#define CAPACITY 100

typedef struct 
{
    int values[CAPACITY];
    int top;
}Stack;

void initialize(Stack *stack)
{
    stack->top = -1;
//COMEÇA VALENDO -1
}
void is_empty(Stack *stack)
{
    return stack->top == -1;

}

void is_full(Stack *stack)
{
    return stack->top == CAPACITY - 1;

}
//inserir
void push(Stack *stack, int value)
{
    if (is_full(stack))
    {
        printf("ERRO:  A PLIHA ESTÁ CHEIA\n");
        return;
    }
    //INCREMETAR UM
    //++ ANTES DA VARIAVEL
    //ELE INCREMENTAR PRIMEIRO E DEPOIS VAI LER O VALOR
    stack->values[++stack->top] = value;
    //++ DEPOIS DA VARIAVEL ELE VAI LER O ELEMENTO E DEPOIS SOMAR OU INCREMENTAR

}

//remoção
void pop(Stack *stack)
{
    if (is_empty(stack))
    {
        printf("ERRO:  A PLIHA ESTÁ VAZIA\n");
        return;
    }
    //DECREMENTAR UM
    //O PUSH É QUE VAI APAGAR DE FATO UMA VARIAVEL, VISTO QUE A FUNÇÃO POP SÓ MEXE COM A VARIAVEL TOP
      stack->top--;

}
int peek(Stack *stack)
{
    if (is_empty(stack))
    {
        printf("ERRO:  A PLIHA ESTÁ VAZIA\n");
        return -1;
    }
     return stack->values[stack->top];

}

void print(Stack *stack)
{
   for (int i = stack->top; i >= 0; i--)
   {
    printf("[%i] %i\n", i, stack->values[i]);
   }
   

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
    print(&stack);

}