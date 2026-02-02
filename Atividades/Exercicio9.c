/*
Escreva um programa que obtenha o
elemento majoritário de um vetor v de n inteiros.
Um elemento majoritario é aquele que aparece mais de n /2
*/
int elementomajoritario(int v[],int n){
    int k;
    for (int i = 0; i < n; i++)
    {
        k = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i] == v[j])
            {
                k = k + 1;
            }
            
        }
        if (k > n / 2)
        {
            return v[i];
        }
        
    }
    return -1;
}
int main()
{
int v[] = {3,1,3,7,3};
int e = elementomajoritario(v,5);
if (e >= 0)
{
   printf("O elemento majoritario é %i",e);
}else
{
     printf("Não existe elemento majoritario");
}
return 0;


}