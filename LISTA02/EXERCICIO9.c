#include <stdio.h>


int main() 
{
  float precocompra=1, precovenda, lucro, totalcompra = 0, totalvenda = 0, totallucro = 0;
  int lucromenorq10 = 0, lucroentre10e20 = 0, lucromaiorq20 = 0;
  while (precocompra != 0)
    {
      scanf("%f %f", &precocompra, &precovenda);
      if (precocompra > 0)
      {
        lucro = ((precovenda - precocompra)/(precovenda))*100;
      
        if (lucro < 10)
        {
          lucromenorq10++;
        }
        if (lucro > 10 && lucro < 20)
        {
          lucroentre10e20++;
        }
        if (lucro > 20)
        {
        lucromaiorq20++;
        }
        totalcompra = totalcompra + precocompra;
        totalvenda = totalvenda + precovenda;
        totallucro = totalvenda - totalcompra;
      }
    }
  printf("%d\n", lucromenorq10);
  printf("%d\n", lucroentre10e20);
  printf("%d\n", lucromaiorq20);
  printf("%.2f\n", totalcompra);
  printf("%.2f\n", totalvenda);
  printf("%.2f\n", totallucro);
  return 0;
}
