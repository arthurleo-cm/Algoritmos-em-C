# include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%i %i %i", &a, &b, &c);

if (a <= b && a<= c)
{
    if (b <= c)
    {
        printf("%i %i %i", a, b , c);
    }
    else
    {
          printf("%i %i %i", a, c , b);
    }   
}
else
{
    if (b <= c)
    {
        if (a <= c)
        {
             printf("%i %i %i", b, a , c);
        }
        else
        {
             printf("%i %i %i", b, c , a);
        }
        
        
    }
 else
    {
        if (a <= b)
        {
             printf("%i %i %i", c, a , b);
        }
        else {
             printf("%i %i %i", c, b , a);
        }
    }
    
    
}



}

