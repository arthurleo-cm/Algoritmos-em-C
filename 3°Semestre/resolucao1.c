#include <stdio.h>

// malloc precisa da lib
#include <stdlib.h>
#define TRUE 1 
#define FALSE 0
// A complexidade temporal influencia no tempo de execução do algoritmo
int twosum(int *v, int n, int k)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] + v[j] == k)
                return TRUE;
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
    //malloc aloca no heap que é melhor que o stack
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
    //se usar o malloc tem que desalocar posteriormente que é o free
    free(v);
    // como executar ./resolucao1 + vetor + k 
return EXIT_SUCCESS;
}