#include <stdio.h>

int main(){
  int total = 0, tipo, quantidade;
  while(1) {
    scanf("%d", &tipo);
    if(tipo == 0){
      break;
    }
    scanf(" %d", &quantidade);
    switch(tipo){
      case 1:
        total += 5 * quantidade;
        break;
      
      case 2:
        total += 4 * quantidade;
        break;
      
      case 3:
        total += 6 * quantidade;
        break;
    } 
  }
  printf("Total: R$ %d.00", total);
}