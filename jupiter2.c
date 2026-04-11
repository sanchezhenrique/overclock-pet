#include <stdio.h>

int main (){;
  float media, p1, p2, p3;
  scanf("%f %f %f", &p1, &p2, &p3);
  media = (3*p1 + 4*p2 + 3*p3) / 10;
  printf("%f \n", media);
  if(media < 5){
    if (media < 3){
      printf("REPROVADO");
    }
    else{
      printf("RECUPERACAO");
    }
  }
  else{
    printf("APROVADO");
  }
}