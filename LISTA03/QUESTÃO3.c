#include <stdio.h>

void ordemcrescente (int x, int y , int z)
{
  if (x > y && x > z)
  {
    if (y > z)
    {
      printf("%d %d %d", z, y, x);
    }
    else
    {
      printf("%d %d %d", y, z, x);
    }
  }
  if (y > x && y > z)
  {
    if (x > z)
    {
      printf("%d %d %d", z, x, y);
    }
    else
    {
      printf("%d %d %d", x, z, y);
    }
  }
  if (z > x && z > y)
  {
    if (x > y)
    {
      printf("%d %d %d", y, x, z);
    }
    else
    {
      printf("%d %d %d", x, y, z);
    }
  }
}



int main(void) {
  int n1, n2, n3;
  scanf("%d %d %d", &n1, &n2, &n3);
  ordemcrescente(n1, n2, n3);
}