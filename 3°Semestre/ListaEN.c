# include <stdio.h>
# include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

node *search(node *head, int value)
{
node *current = head;
while (current != NULL)
{
    if (current->value == value)
    return current;
    
        current = current->next;
}
return NULL;

}
void print(node *head)
{
    node *current = head;

    while (current != NULL)
    {
        printf("%i -> ", current->value);
        current = current->value;
    }
    
}


void insertAtEnd(node *head, int value)
{
// 1 passo : Encontrar o fim da lista 
    node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }
// 2 passo : Criar o elemento que seja apontado pelo penultimo
    node *new = malloc(sizeof(node));
    new->value = value;
    new->next = NULL;
// 3 passo :Fazer com que recebe o endereço do novo elemento
    current->next = new;
} // Tentar fazer sem a variavel new, só com o current
void insertAtBeginning(node *head, int value)
{
// inserir um novo elemento no inicio da lista encadeada
//1 passo criar um novo elemento
node *new = malloc(sizeof(node));

new->value = value;
new->next = head;
head = new;
}