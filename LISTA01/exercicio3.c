#include <stdio.h>
#include <math.h>


int main(void) {
  int nasc, idade;
  char aniv;
  scanf("%d", &nasc);
  scanf("%c", &aniv);
  
  idade = 2023 - nasc;
  if (aniv == 'S'){
    idade = idade;
  }
  else if (aniv == 'N'){
    idade = idade - 1;
  }

  printf("%d\n", idade);
  if (idade >= 18){
    printf("Pode dirigir");
  }
  else{
    printf("Não pode dirigir");
  }
}