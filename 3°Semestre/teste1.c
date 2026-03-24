// U = {10,7,5,18,,12,20,15}
//S é um subconjunto    W = 25
//Backtracking -> Recursão
// M = posições preenchidas para alcançar o resultado
// T = Variavel que guarda o somatorio dos numeros no momemto
// K = Numeros de elementos que tentei somar
// Backtrafing
// Arvoré de execução gigantesca, teoricamnte + de 100 tentativas para souber todos os resultados
#include<stdio.h>
#include<stdlib.h>

void print(int *s, int n)
{
for (int i = 0; i < n; i++)
{
    printf("%i", s[i]);
}
printf("\n");
}


void sum(int *u, int *s, int n, int m, int t,int k, int w)
{
    //Primerio caso Base
    if (t == w)
    {
       print(s,m);
       return;
    }
    // Segundo caso Base
    if (t > w)
    {
        return;
    }
    for (int i = k; i < n; i++)
    {
        s[m] = u[i];
        sum(u ,s ,n ,m + 1,t + u[i],i + 1,w);
    }
        
}


int main()
{
int u[] = {10,7,5,18,12,20,15};
int *s = malloc(7 * sizeof(int));
sum(u, s,7, 0, 0, 0, 35);
return EXIT_SUCCESS;


}