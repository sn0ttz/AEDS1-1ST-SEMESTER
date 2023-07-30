#include <stdio.h>
#include <stdbool.h>

int pos_ou_neg (int x)
{
  if (x >= 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}




int main(void) 
{
  int n,num;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    {
      scanf("%d", &num);
      if (pos_ou_neg(num))
      {
        printf("O número é positivo\n");
      }
      else if (!pos_ou_neg(num))
      {
        printf("O número é negativo\n");
      }
    }
}