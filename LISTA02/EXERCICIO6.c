#include <stdio.h>

int main ()
{
  float n, res = 0;
  scanf("%f", &n);
  for (float i = 1; i <= n; i++)
  {
    res = res + (1/i);
  }
  printf("%.2f", res);
}