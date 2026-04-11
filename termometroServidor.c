#include <stdio.h>

int main(){
  int t, maior, soma = 0, quantidade = 0;

  while(1){
    scanf("%d", &t);

    if(t < 0){
      break;
    }

    if(quantidade == 0){
      maior = t; // inicializa corretamente
    }

    if(t > maior){
      maior = t;
    }

    soma += t;
    quantidade++;
  }

  if(quantidade > 0){
    printf("Maior: %d\n", maior);
    printf("Media: %.1f\n", (float)soma / quantidade);
  } else {
    printf("Nenhum valor valido foi inserido.\n");
  }
}