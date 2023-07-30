#include <stdio.h>


int main() 
{
  int num, cand1=0, cand2=0, cand3=0, cand4=0, branco=0, nulo=0;
  while (num!= 0)
    {
      scanf("%d", &num);
      if (num > 0)
      {
        switch (num)
          {
            case 1:
              cand1++;
            break;

            case 2:
              cand2++;
            break;

            case 3:
              cand3++;
            break;

            case 4:
              cand4++;
            break;

            case 5:
              nulo++;
            break;

            default:
              branco++;
          }
      }
    }
  printf("%d\n", cand1);
  printf("%d\n", cand2);
  printf("%d\n", cand3);
  printf("%d\n", cand4);
  printf("%d\n", branco);
  printf("%d\n", nulo);
  return 0;
}
