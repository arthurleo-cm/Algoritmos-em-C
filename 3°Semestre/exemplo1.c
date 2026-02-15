#include <stdio.h>
#define TRUE 1
#include <math.h>
int main()
{
    int a, b, c, n;

    while (TRUE)
    {
        printf("Entre com um numero: ");
        scanf("%i", &n);

        if (n > 0 )
        {
            break;
        }
        
    }
    for (a = 1; a <= n; a++)
    {
        for (b = a; a <= n; b++)
        {
            for (c = b; a <= n; c++)
            {
               if (pow(a, 2), pow(b, 2) == pow(c, 2))
               {
                printf("%i, %i, %i\n",a, b, c);
               }
            }
            
        }
        
    }
    return 0;
    
}