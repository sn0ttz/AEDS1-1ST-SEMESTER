#include <stdio.h>
#include <math.h>


int main(void) {
  int a , b, soma;
  scanf("%d", &a);
  scanf("%d", &b);
  soma = a + b;
  if (soma >= 10){
    soma += 5;
  }
  else{
    soma += 7;
  }
  printf("\n%d", soma);
}