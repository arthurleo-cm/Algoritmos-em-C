#include <stdio.h>
#include <stdlib.h>


struct node
{
    int value;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

Node *create(int value, Node *left, Node *right)
{
    Node *node = malloc(sizeof(Node));

    if(node == NULL)
    {
        printf("ERRO: falha na memoria \n");
        return NULL;
    }

    node->value = value;
    node->left = left;
    node->right = right;
    return node;
}


void preordem(Node *root)
{
    if( root != NULL)
    {
        printf("%i ", root->value);
        preordem(root->left);
        preordem(root->right);
    }

}


void emordem(Node *root)
{
    if(root != NULL)
    {
        emordem(root->left);
        printf("%i ", root->value);
        emordem(root->right);
    }


}


void posordem(Node *root)
{
    if(root != NULL)
    {
        posordem(root->left);
        posordem(root->right);
        printf("%i ", root->value);
    }

}


int height(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if(leftHeight > rightHeight)
    {
        return 1 + leftHeight;
    }
    else
    {
        return 1 + rightHeight;
    }
}


int main()
{
     Node *root = create(2, NULL, NULL);
    root->left = create(5, NULL, NULL);
    root->left->left = create(3, NULL, NULL);
    root->left->right = create(8, NULL, NULL);
    root->left->right->left = create(4, NULL, NULL);
    root->right = create(7, NULL, NULL);
    root->right->left = create(1, NULL, NULL);
    root->right->left->right = create(9, NULL, NULL);
    root->right->right = create(6, NULL, NULL);
    posordem(root);
    return EXIT_SUCCESS;
}