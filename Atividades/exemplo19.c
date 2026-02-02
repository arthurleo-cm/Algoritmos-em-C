/*
Escreva um programa que dado os coeficientes a,b,c de uma equação de segundo grau,calcule as raizes reais
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1 


int raizes(float a,float b, float c, float *raiz1,*float *raiz2);


int main()
{
float a,b,c,x1,x2;

while (TRUE)
{
   printf("Coloque os coeficientes da equação");
scanf("%f %f %f", &a,&b,&c);

if (a > 0)
{
    break;
}
printf("O coeficiente 'a' deve ser um valor maior que 0");
}

int n = raizes(a,b,c, &x1,&x2);

if (n==0){
    printf("Não tem raiz real");
}
else
{
    if (n == 1)
    {
        printf("A equação possui duas raizes iguais : %2f",x1);
    }
    else
    {
        printf("A equação possui duas raizes distintas: %2f e %2f",x1,x2);
    };
    
    
}
return 0;

}

int raizes(float a,float b, float c, float *raiz1, float * raiz2)
{
float delta = b * b - 4 * a * c;
if (delta < 0)
{
    return 0;
}

if (delta == 0)
{
    *raiz1 = -b / (2 * a);

    return 1;
}
*raiz1 = (-b + sqrt(delta)) / (2 * a);
*raiz1 = (-b + sqrt(delta)) / (2 * a);
return 2;
}

