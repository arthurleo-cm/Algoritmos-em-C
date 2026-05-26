#include <stdio.h>
#include <stdlib.h>


struct node
{
    int value;
    struct node *left;
    struct node *right;
};

typedef struct node Node;


Node *create(int value, Node * left, Node *right)
{
    Node *node= malloc(sizeof(Node));
    if (node == NULL)
    {
    printf("dEU ERRO");
    return NULL;
    }

    node->value = value;
    node->left = left;
    node->right = right;
    return node;
    
}


Node *insert(Node *root,int value)
{
    if (root == NULL)
    {
        return create(value, NULL, NULL);
    }

    if (root->value > value)
    {
        root->left = insert(root->left,value);
    }
    else
    {
        root->right = insert(root->right,value);
    }
    
    return root;

}

Node *search(Node *root,int value)
{
   while (root != NULL && root->value !=value)
   {
    if (root->value > value)
    {
       root = root->left;
    }
    else
    {
        root = root->right;
    }
    
   }
   return root;
}

Node *sucessor(Node *root)
{
    Node *current = root;

    while (current->left !=NULL)
    {
        current = current->left;
    }
    return current;
}

Node *delete(Node *root, int value)
{
    if (root->value > value)
    {
        root ->left  =delete(root->left,value);
    }
    else if(root->value < value)
    {
        root->right = delete(root->right,value);
    }
    else
    {
        //caso1 - a raiz possui um filho a direita
        if(root->left = NULL)
        {
            Node *temporario = root;
            root = root->right;
            free(temporario);
        }
        //Caso 2 - a raiz possui um filho a esquerda
        if (root->right = NULL)
        {
             Node *temporario = root;
            root = root->left;
            free(temporario);
        }
        //CASO 3 - Onde a raiz tem 2 filhos tanto a esquerda e direita
        Node *temporario = sucessor(root);
        root->value = temporario->value;
        root->right = delete(root, temporario->value);
        

    }
    return root;
}
Node *emordem(Node *root)
{
    if (root = NULL)
    {
        return NULL;
    }
    emordem(root->left);
    printf("%i", root->value);
    emordem(root->right);
    //crescente para uma arvore binaria de busca
}
int main()
{
    Node * root = NULL;
    int valor[] = {2,5,3,8,4,7,1,9,6};

    for (int i = 0; i < sizeof(valor) / sizeof(valor[0]); i++)
    {
        root = insert(root,valor[i]);
        
    }
    emordem(root);
    return EXIT_SUCCESS;
}