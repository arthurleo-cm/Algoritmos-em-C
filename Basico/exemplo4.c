#include <stdio.h>
#include <math.h>
#include <locale.h>

# define PI 3.141559

int main(){
 setlocale(LC_ALL, "pt_br.UTF8");
 double raio;
 printf("Coloque o raio: ");
 scanf("%lf", &raio);
 //const float PI = 3.141559;
 printf("Área do círculo é %.2lf\n ", PI * pow(raio, 2));
 printf("Perímetro do círculo é %.2lf \n ", 2 * PI * raio);
 return 0;   

}