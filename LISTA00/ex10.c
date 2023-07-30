#include <stdio.h>
#include <math.h>


int main(void) {
  int h, min, temp;
  scanf("%d", &h);
  scanf("%d", &min);
  temp = h*60 + min;
  printf("%d", temp);
}