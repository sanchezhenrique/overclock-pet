#include <stdio.h>

int main(){
  unsigned int tipo, quantidade, total;
  scanf("%u %u", &tipo, &quantidade);
  switch(tipo){
    case 1:
      printf("%ux X-Burgao \n", quantidade);
      total = 15 * quantidade;
      break;

    case 2:
      printf("%ux Cachorro-Quente \n", quantidade);
      total = 8 * quantidade;
      break;

    case 3:
      printf("%ux Coxinha \n", quantidade);
      total = 5 * quantidade;
      break;

    case 4:
      printf("%ux Suco Natural \n", quantidade);
      total = 7 * quantidade;
      break;

    case 5:
      printf("%ux Batata Frita \n", quantidade);
      total = 10 * quantidade;
      break;
   
    default:
      printf("Item invalido");
      return 0;
  }
  printf("Total: R$ %u.00", total);
}