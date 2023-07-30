#include <stdio.h>

int main(void) {
  int num=0,n, qtd3=0,qtd2=0, qtd5 = 0;
  while (num <10)
  {
    num++;
    scanf("%d", &n);
    if(n % 3 == 0 && n % 9 == 0)
    {
      qtd3++;
    }
    else if (n % 2 == 0)
    {
      qtd2++;
    }
    else if (n % 5 == 0)
    {
      qtd5++;
    }
    else
    {
      printf("Número não divisível pelos valores\n");
    }
  }
  printf("%d número são divisíveis por 3 e 9\n", qtd3);
  printf("%d número são divisíveis por 2\n", qtd2);
  printf("%d número são divisíveis por 5\n", qtd5);
}