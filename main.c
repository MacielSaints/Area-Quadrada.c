#include <stdio.h>

void Area (float a,float b){
  printf("%.2f",a*b);
}

float Area2(float a,float b)
{ 
return a*b;
}

int main(void) {

  float altura;
  float largura;
  float resultado;

  printf("\033[2J\033[1;1H");
  printf("Digite a altura: ");
  scanf("%f",&altura);

  printf("Digite a largura: ");
  scanf("%f",&largura);
  
  resultado = Area2(altura,largura);
  
  printf("\nresultado = %2.f \n",resultado);

 return 0;
}