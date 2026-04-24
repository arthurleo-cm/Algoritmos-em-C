// Somente a função recursiva aqui
Struct record
void extremes(Node *head, int *minimum, int *maximum)
{
  if(head->next == NULL)
  {
    *minimum = head->value;
    *maximum = head->value;
  }
extremes(head->next,minimum,maximum)
  if(head->value > maximum)
{
  maximum = head->value
}
if(head->value < minimum)
{
  minimum = head->value;
}
  
}
