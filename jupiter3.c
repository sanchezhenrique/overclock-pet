#include <stdio.h>

int main (){
  int t, aprov = 0, reprov = 0, rec = 0;
  float n1, n2;
  scanf("%d", &t);
  
  for(t; t > 0; t--){
    scanf("%f %f", &n1, &n2);

    if((n1 + n2) / 2 >= 5){
      aprov++;
    }
    else if((n1 + n2) / 2 >= 3){
      rec++;
    }
    else{
      reprov++;
    }
  }

  printf("Aprovados: %d \n", aprov);
  printf("Recuperacao: %d \n", rec);
  printf("Reprovados: %d \n", reprov);

}