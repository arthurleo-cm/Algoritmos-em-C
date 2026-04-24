struct record
{
int value;
Struct record *next;

}typedef struct record Node;

int subsequence(Node *head)
{
Node *current = head;
int maior = 1;
int atual = 0;

while(current->next !=NULL)
{
    if(current->value < current->next->value)
    {
    atual ++;
    }
        else
        {
        atual = 1;
        }
current == current->next;
    if(atual > maior)
    {
    maior = atual;
    }
 }
