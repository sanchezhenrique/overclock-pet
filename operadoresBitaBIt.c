#include <stdio.h>

int main (){
  int a;
  scanf("%d", &a);
  if( a & 1 ){
    printf("%d eh impar", a);
  }
  else{
    printf("%d eh par", a);
  }
  printf("\nO dobro de %d eh %d", a, a << 1);
}