#include <stdio.h>
float calculafat (float y)
{
  float fat = 1.0;
  if (y == 1 || y == 0)
    {
    return 1;
    }
  else
  {
    fat = y * calculafat(y-1);
    return fat;
  }
}




float valorS (int x)
{
  float s=1;
  for (float i = 1; i <= x; i++)
    {
      s = s + 1/calculafat(i);
    }
  return s;
}




int main(void) {
  int n;
  float valordeS;
  scanf("%d", &n);
  valordeS = valorS(n);
  printf("%.2f", valordeS);
}