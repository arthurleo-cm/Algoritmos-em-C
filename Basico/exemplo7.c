#include <stdio.h>
int a,b = 9;

double funcao1(int x, int y){
int z = x;
x = y;
y = z;
return (x + y) / 2.0;
}
void funcao2(); 

int main(){
 int x = 1, y = 3;
 double z = 5.0;
 z = funcao1(x , y);
 printf("x = %i y = %i z = %lf\n", x, y,z );
x = 1; 
y = 5;
z = 3 * funcao1(x,y + 1);
 printf("x = %i y = %i z = %lf\n", x, y,z );
x= 1;
funcao2();
 printf("x = %i y = %i z = %lf\n", x, y,z );
 return 0;
}
void funcao2()
{
    b += 2;
    a = b + 1;
}