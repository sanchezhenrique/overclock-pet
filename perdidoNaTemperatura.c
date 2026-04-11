#include <stdio.h>

int main(){
  int n;
  float t, conversao;

  scanf("%d %f", &n, &t);

  switch (n){
  case 1: // Fahrenheit -> Celsius
    t = 5*(t - 32) / 9;
    printf("%.2f graus Celsius\n", t);
    break;
  case 2: //Celsius -> Fahrenheit
    conversao = (9 * t / 5) + 32;
    printf("%.2f graus Fahrenheit\n", conversao);
    break;
  default:
    printf("Conversao invalida");
    return 0;
    break;
  }
  if(t > 15){
      if(t > 30){
        printf("Quente");
      }
      else{
        printf("Agradavel");
      }
    }
    else{
      printf("Frio");
    }
}