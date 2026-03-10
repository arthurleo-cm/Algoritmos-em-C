#include <stdio.h>
#include <stdlib.h>

//Recursividade "Dividir para conquistar"

int maximo(int *v,int n )
{
    if (n == 1)
    {
        return v[0];
    }
    else
    {   
        int m = maximo(v,n - 1);

        if (m > v[n - 1])
        {
            return m 
        }
        else
        {
            return v[n - 1];
        }
    }
    
}
/*
int maximo(int *v,int n )
{
    if (n == 1)
    {
        return v[0];
    }
// O else não faz diferença por causa do return; Essa maneira ela é iquivalente a anterior

        int m = maximo(v,n - 1);

        if (m > v[n - 1])
        {
            return m 
        }
        else
        {
            return v[n - 1];
        }
    }
    

*/

#include <stdio.h>
#include <stdlib.h>
int search(int *v,int n,int k, int i)
{
if (i > n)
{
    return -1
}
if (v[i] == k)
{
   return i;
}

return search(v,n,k,i + 1);
}
//busca sequencial
// 2 casos bases na função search
// Fazer pilha de execução 


