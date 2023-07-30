#include <stdio.h>

void mediafinal (float x)
{
  if (x <= 39)
  {
    printf("F\n\n");
  }
  if (x >= 39 && x <= 59)
  {
    printf("E\n\n");
  }
  if (x >= 60 && x <= 69) 
  {
    printf("D\n\n");
  }
  if (x >=70 && x <= 79)
  {
    printf("C\n\n");
  }
  if (x >= 80 && x <= 89)
  {
    printf("B\n\n");
  }
  if (x >= 90)
  {
    printf("A\n\n");
  }
}




int main(void) {
  int n;
  scanf("%d", &n);
  float media;
  for (int i = 0; i < n; i++)
    {
      scanf("%f", &media);
      mediafinal(media);
    }
}