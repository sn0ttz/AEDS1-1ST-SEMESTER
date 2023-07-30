#include <stdio.h>

char categoria(int n) 
{
  char cat;
  if (n >=5 && n <=7)
  {
    cat = 'F';
    return cat;
  }
  if (n >=8 && n <=10)
  {
    cat = 'E';
    return cat;
  }
  if (n >=11 && n <=13)
  {
    cat = 'D';
    return cat;
  }
  if (n >=14 && n <=15)
  {
    cat = 'C';
    return cat;
  }
  if (n >=16 && n <=17)
  {
    cat = 'B';
    return cat;
  }
  if (n >=18)
  {
    cat = 'A';
    return cat;
  }
}

int main() {
  char categ;
  int x;
  scanf("%d", &x);
  categ = categoria(x);
  printf("%c", categ);
     
}