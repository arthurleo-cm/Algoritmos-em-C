#include <stdio.h>
#include <locale.h>
/*
Escreva um programa que dado, um vetor v de números inteiros, verifique se existe dois elementos,
distintos entre si, que somado seja igual á K
*/
int main()
{
setlocale(LC_ALL, "");
int n, k;

printf("Digite um número inteiro: ");
scanf("%i", &n);
int vetor[n];

for (int i = 0; i < n; i++)
{
    printf("Digite os numeros no vetor: ");
    scanf("%i", &vetor[i]);
}
printf("Digite o valor de k:");
scanf("%i", &k);

for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
       if (vetor[i] + vetor[j] == k)
       {
        printf("Os numeros somados é igual á k %i", k);
       }
       else
       {
        printf("não deu!");
       }
       
    }
    
}
return 0;

}