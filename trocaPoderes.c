#include <stdio.h>

int main(){
  int a, b, temp, *pA, *pB;
  scanf("%d %d", &a, &b);

  pA = &a;
  pB = &b;

  temp = *pA;
  *pA = *pB;
  *pB = temp;

  printf("a = %d, b = %d", a, b);
}