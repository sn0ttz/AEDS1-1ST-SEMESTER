#include <stdio.h>
#include <math.h>


int main(void) {
  char opc;
  scanf("%c", &opc);

  switch (opc){
    case '=':
    printf("SINAL DE IGUAL");
    break;

    case '>':
    printf("SINAL DE MAIOR");
    break;

    case '<':
    printf("SINAL DE MENOR");
    break;

    default:
    printf("OUTRO SINAL");
    break;
  }
    
  return 0;
}