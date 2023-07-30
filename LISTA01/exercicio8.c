#include <stdio.h>
#include <math.h>


int main(void) {
  float sal;
  char opc;
  scanf("%c", &opc);

  switch (opc){
    case 'A':
    scanf("%f", &sal);
    sal = sal + (0.08 * sal);
    printf("%.2f", sal);
    break;

    case 'B':
    scanf("%f", &sal);
    sal = sal + (0.11 * sal);
    printf("%.2f", sal);
    break;

    case 'C':
    scanf("%f", &sal);
    if (sal <= 1000){
      sal = sal + 350;
    }
    else{
      sal = sal+200;
    }
    printf("%.2f", sal);
    break;
  }
    
    
  return 0;
}