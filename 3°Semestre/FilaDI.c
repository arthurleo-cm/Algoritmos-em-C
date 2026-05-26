//Fila Dinamica
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
struct node
{
    int value;
    struct node *next;
};
typedef struct node Node;


typedef struct 
{
    Node *front;
    Node *rear;
    int size;
}Queue;

void initialize(Queue *queue)
{
    queue->front = NULL;
    queue->rear = NULL;
  //  queue->size = NULL;
}
int is_empty(Queue *queue)
{
    return queue-> size == 0;
}

void enqueue(Queue *queue, int value)
{
 Node *node  = malloc(sizeof(Node));

 if (node == NULL)
 {
    printf("Falha ao alocar memoria\n");
    return;
 }

 node-> value = value;
 node-> next = NULL;

 if (is_empty(queue))
    queue->front = node;
 else
    queue->rear->next = node;
    //aqui
    queue->rear=node;
    queue->size++;
 
}

void dequeue(Queue *queue)
{
    if (is_empty(queue))
    {
        printf("FILA VAZIA\n");
        return;
    }
    //
    Node *temporario = queue->front;
    queue->front = temporario->next;
    free(temporario);
    queue->size--;
    //Se eu colocar queue->front perco toda a fila
    if (is_empty(queue))
    queue->rear = NULL;
}
int peek(Queue *queue)
{
    if (is_empty(queue))
    {
        printf("FILA VAZIA");
        return INFINITY;
    }
 return queue->front->value;
}
void print(Queue *queue)
{
    Node *current = queue->front;

    while (current != NULL)
    {
        printf("%i", current->value);
        current = current->next;
    }
    
}

int main()
{
    Queue queue;
    initialize(&queue);
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    dequeue(&queue);
    enqueue(&queue, 40);
    enqueue(&queue, 50);
    dequeue(&queue);
    print(&queue);

return EXIT_SUCCESS;


}