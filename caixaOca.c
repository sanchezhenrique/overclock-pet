#include <stdio.h>

int main(){
  int l, c;

  scanf("%d %d", &l, &c);

  for(int i = 1; i <= l; i++){
    if(i == 1 || i == l){
      for(int j = 0; j < c; j++){
        printf("*");
      }
    } else{
      printf("*");
      for(int j = 2; j < c; j++){
        printf(" "); 
      }
      printf("*");
    }
    printf("\n");
  }
}