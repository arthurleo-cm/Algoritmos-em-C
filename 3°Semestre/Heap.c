#include <stdio.h>
#include <stdlib.h>

#define PAI(i) (((i) - 1) / 2 )
#define FILHO_ESQUERDO(i) (2 * (i) + 1)
#define FILHO_DIREITO(i) (2 * (i) + 2)
// realoc redimenzionar o vetor
//inserir
void trocar(int *a, int *b)
{
    int temporario = *a;
    *a = *b;
    *b = temporario;
}

void subir(int *v, int n)
{

}
//deletar
void descer(int *v, int n, int i)
{
    int m = i;
    int e = FILHO_ESQUERDO(i);
    int d = FILHO_DIREITO(i);

    if (e < n && v[e] > v[m])
        m = e;

    if (d < n && v[d] > v[m])
        m = d;

    if (i != m)
    {
        trocar(&v[i], &v[m]);
        descer(v,n,m);
    }

    

}
void inserir(int *v, int n, int k)
{

}
//PASSANDO N POR REFERENCIA 
int extrair(int *v, int *n)
{
    if(n == 0)
    {
        printf("ERRO: TÁ VAZIO\n");
        return - 1;
    }
    int temporario = v[0];
    v[0] = v[*n - 1];
    *n = *n - 1;
    descer(v,n,0);

    if(n > 0)
    {
        int *w = realloc(*v, (*n) * sizeof(int));

        if (w == NULL)
        {
            printf("ERRO: FALHA AO REALOCAR MEMORIA\n");
            return -1;
        }
        v = w;
        free(w);
    }
    return temporario;
}
void construir(int *v, int n)
{

    for (int i = n / 2; i > 0; i--)
{
    descer(v,n,i);
}



}
void imprimir(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ",v[i]);
    }
    printf("\n");
}
// UTILIZANDO O ALGORITMO DE ORDENAÇÃO HEAP SORT  O(n log n)
void ordenar(int *v, int n)
{
    //transformando em heap
    construir(v,n);

    for (int i = n - 1; i > 0; i--)
    {
        //movendo o maior parao final
        trocar(&v[0], &v[i]);
    

        descer(v,i,0);
         //reagornização o heap
    }
    



}
int main()
{
    int v[] = {3,9,2,1,7,8,5,4,6,10};
    int n = sizeof(v) / sizeof(v[0]);
    construir(v,n);
    imprimir(v,n);
    return EXIT_SUCCESS;
}
