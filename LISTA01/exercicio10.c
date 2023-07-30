#include <stdio.h>
#include <math.h>


int main(void) {
  int vel, velMax, dif;
  scanf("%d", &velMax);
  scanf("%d", &vel);

  if (vel < velMax){
    printf("Motorista respeitou a lei");
  }
  else if (vel > velMax){
    dif = vel - velMax;
    if(dif <= 10){
      printf("Multa de 50 reais");
    }
    else if(dif > 10 && dif <= 30){
      printf("Multa de 100 reais");
    }
    else if (dif > 30){
      printf("Multa de 200 reais");
    }
  }
    
  return 0;
}