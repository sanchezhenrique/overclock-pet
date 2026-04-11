#include <stdio.h>

int main(){
  unsigned int ano;
  scanf("%d", &ano);
  if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
    printf("SIM");
  }
  else{
    printf("NAO");
  }
}