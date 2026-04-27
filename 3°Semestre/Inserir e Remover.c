# include <stdio.h>
# include <stdlib.h>

struct record
{
int value;
struct record *next;
}
typedef struct record Node;

//*head  = passagem por cópia | **head = passagem por referência 
// O Asteriaco do head faz gerar uma especie de cópia, tudo que eu alterar aqui não mudara o original,somente de usar dois(**head)
Node *insertAt(Node *head,int value,int position)
{
    Node *new = malloc(sizeof(Node));
    if (new == NULL)
    {
        return NULL;
    }
    new->value = value;
    new->next = NULL;
    //Caso 1 - Inserir um novo elemento no começo da lista

    if (position == 0)
    {
        new->next = head;
        head = new;
        return head;
    }
    // Caso 2 - Inserir um elemento em qualquer parte da lista
    Node *current = head;
    for (int i = 1; i < position - 1 && current->next !=NULL; i = i +1)
    {
        current = current->next;
    }
    new->next = current->next;
    current->next = new->next;


return head;
}

Node *removeAt(Node *head, int position)
{
    if (position == 0)
    {
        Node *temporary = head;
        head = head->next
        free(temporary);
        return head;
    }
    

//removendo por posição 
Node *current = head;
int i = 1;
while (i < position)
{
    current = current->next;
    i  = i + 1 
}
Node *temporary = current->next;
//é necessasrio criar uma temporaria para não perder a referencia


    current->next = current->next->next;
    free(temporary);
    return head;



}

Node *removeFirst(Node * head,int value)
{
    //Remover o PRIMEIRO ocorrencia do elemento com o valor definido
    if (head->value == value)
    {
        Node *temporaria = head;
        head = head->next;
        free(temporaria);
        return head;
    }
     // ACIMA ESTÁ ELIMINIANDO O VALOR CASO ESTEJA NA PRIMEIRA OPÇÃO
    Node *anterior = head;
    Node *current = head->next;
    //current tem que ficar na frente do anterior, pois o anterior que vai dizer o que vai ser removido
   
    while (current != NULL)
    //Só percorrer a lista já que a validação teoricamente vou colocar em baixo
    {

if (current->value == value)
{
    anterior->next = current->next;
    free(current);
    return head;
}
    anterior = current;
    current = current->next;

    }
    return head;
}


Node *removeFirst(Node * head,int value)
{
    //Remover TODOS as ocorrencias do elemento com o valor definido









}

