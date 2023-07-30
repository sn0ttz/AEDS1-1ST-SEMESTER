#include <stdio.h>
#include <math.h>


int main(void) {
  float x, y;
  scanf("%f", &x);

  if (x<=1){
    y = 1;
  }
  else if (1 < x && x <= 2){
    y = 2;
  }
  else if (2 < x && x <= 3){
    y = pow(x, 2);
  }
  else if (x > 3){
    y = pow(x, 3);
  }

  printf("%.2f", y);
  
  
  
  return 0;
}