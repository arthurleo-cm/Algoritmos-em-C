// Programa em C que calcula a área e o perímetro de um circulo 
/* MACRO FAZ A TROCA DE UMA INFORMAÇÃO PELA A OUTRA COMO NO CODIGO AONDE DEFINIMOS O MACRO PI COM O VALOR 
E DURANTE A COMPILAÇÃO O COMPILADOR VER O PI NA FUNÇÃO MAIN E DEFINE COMO O VALOR DESCRITO PODE USAR PARA QUALQUER UMA*/ 

#include <stdio.h>

# define PI 3.141559
int main(){
 float raio;
 printf("Coloque o raio");
 scanf("%f", &raio);
 //const float PI = 3.141559;
 printf("Area do circulo %.2f\n ", PI * raio * raio);
 printf("Perimetro do circulo %.2f \n ", 2 * PI * raio);
 return 0;   

}