# include <stdio.h>
int soma(int a, int b)
{
    return a + b;
}
int sub(int a , int b)
{
    return a - b ;
}
int multi(int a, int b)
{
    return a * b;
}
int divi(int a , int b)
{
    return a / b;
}
int resto(int a , int b)
{
    return  a % b;
}

int main(){
 int a,b;
 scanf("%i %i", &a, &b);
  printf("a = %i\n", a);
  printf("b = %i\n", b);
  printf("a + b = %i\n", soma(a,b));
  printf("a - b = %i\n", sub(a,b));
  printf("a * b = %i\n", multi(a,b));
  printf("a / b = %i\n", divi(a,b));
  printf("a %% b = %i\n",resto(a, b)); 
 return 0;
}
