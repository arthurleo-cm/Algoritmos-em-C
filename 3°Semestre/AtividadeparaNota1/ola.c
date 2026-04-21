struct record
{
    int value;
    struct record *next;
    
}
typedef struct record Node;


int duplicates(Node *head)
{
  Node *current = head;
  int repe = 0;
  
     while (current != NULL)
    {
        Node *auxiliar = head;

        while (auxiliar != current)
        {
            if (auxiliar->value == current->value)
            {
                rep++;
                break; // evita contar mais de uma vez
            }
            auxiliar = auxiliar->next;
        }

        current = current->next;
    }

    return rep;

}
