#include <stdio.h>
#include <stdlib.h>
#define TRUE 1 
#define FALSE 0
int search(int *v, int n, int k)
{
for (int i = 0; i < n; i++)
{
    if(v[i] == k)
    return i;
}
return -1;
}


int twosum(int *v, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
    int j = search(v,n, k - v[i]);

            if(j != -1 && i != j)
                return TRUE;
}
    return FALSE;
}
int main(int argc, char *argv[])
{
    int n = atoi(argv[1]); 
    int k;

    if (argc != n + 3)
    {
        printf("ERRO: O número de parâmetros está incorreto\n");
        return EXIT_FAILURE;
    }
    int *v = malloc(n * sizeof(int));

    if (v == NULL )
    {
        printf("ERROR : Falha ao alocar mémoria ");
        return EXIT_FAILURE;
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = atoi(argv[i + 2]);
    }
    k = atoi(argv[n + 2]);

    if (twosum(v, n, k))
    {
       printf("Existe dois elementos que somados são iguasl á %i", k);
    }
    else
    {
        printf("Não Existe dois elementos que somados são iguasl á %i", k);
    }
    free(v); 
return EXIT_SUCCESS;
}
