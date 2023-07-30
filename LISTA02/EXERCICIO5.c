#include <stdio.h>

int main ()
{
  float sal = 0, somaSal = 0;
  int  maior = 0, salMenor100 = 0, numhab = 0, numfil = 0, somafil = 0;
  
  while (sal >= 0)
  {
    numhab++;
    scanf("%f", &sal);
    somaSal = somaSal + sal;
    if (sal > maior)
    {
      maior = sal;
    }
    if (sal < 100)
    {
      salMenor100++;
    }
    scanf("%d", &numfil);
    somafil = somafil + numfil;
  }
  printf("%f\n", somaSal/numhab);
  printf("%d\n", somafil/numhab);
  printf("%d", maior);
  printf("%d", (salMenor100/numhab)*100);
  return 0;
}