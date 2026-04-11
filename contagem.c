#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  if(n <= 0){
    return 0;
  }

  for(int i =1; i <= n; i++){
    printf("%d \n", i);
  }
}