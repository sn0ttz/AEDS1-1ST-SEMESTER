#include <stdio.h>

void tipotriangulo (int x, int y , int z)
{
  if (x < y + z && y < x + z && z < x + y)
  {
    if (x == y && x == z)
    {
      printf("Esse triângulo é equilátero!\n");
    }
    else if (x == z || x == y)
    {
      if (x == y && y != z || x == z && z != y || y == z && z != x)
      {
        printf("Esse triângulo é isóceles!\n");
      }
    }
    else
    {
      printf("Esse triângulo é escaleno!\n");
    }
  }  
}




int main(void) {
  int n1=0, n2=0, n3=0;
  while (n1 != 9999 /* flag para parar o loop */)
    {
      scanf("%d %d %d", &n1, &n2, &n3);
      if (n1 != 9999)
      {
        tipotriangulo(n1, n2, n3);
      }
    }
  return 0;
}