# include <stdio.h>

int main()
{
float lado1,lado2,lado3;
scanf("%f %f %f", &lado1,&lado2,&lado3);

if (lado1 > 0 && lado2 > 0 && lado3 > 0 && lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2)
{
    if (lado1 == lado2 && lado2 == lado3)
    {
    printf("O triangulo é equilatero. "); 
    }
    else
    {
        if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
        {
            printf("O triangulo é escaleno. ");
        }
        else
        {
            printf("O triangulo é isoceles. ");
        }
        if (lado1 * lado1 == lado2 * lado2 + lado3 + lado3 || lado2 * lado2 ==lado1 * lado1 + lado3 * lado3 || lado3 * lado3 == lado1 * lado1 + lado3 * lado3 )
        {
            printf("Este triangulo é retangulo. " );
        }
        printf("\n");
        
    }
    
    
    
}
else
{
    printf("As medidas estão errada ._.");
}

return 0;
}