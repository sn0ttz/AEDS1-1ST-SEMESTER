#include <stdio.h>
void media (int x){
  float sal, mediadesal, saltotal;
  int numfil, count = 0;
  for (int i = 1; i <= x; i++){
    printf("\n\nInforme o salário do entrevistado %d: ", i);
    scanf("%f", &sal);
    printf("\nInforme quantos filhos tem o entrevistado %d: ", i);
    scanf("%d", &numfil);
    count = count + numfil + 1;
    saltotal += sal;
  }
  mediadesal = saltotal / count;
  printf("\nA média salarial é de %.2f", mediadesal);
}



int main(void) {
  int numpessoas;
  printf("Informe a quantidade de pessoas a serem entrevistadas:\n");
  scanf("%d", &numpessoas);
  media(numpessoas);
}
