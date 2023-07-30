#include <stdio.h>
#include <math.h>


int main(void) {
  int nota;
  scanf("%d", &nota);
  if (nota >= 8 && nota <=10){
    printf("Ótimo");
  }
  else if (nota >=7 && nota < 8){
    printf("Bom");
  }
  else if (nota >=5 && nota < 7){
    printf("Regular");
  }
  else if (nota < 5){
    printf("Insatisfatório");
  }
}