#include <stdio.h>
void media (int x, int y , int z, char l){
  float mediaaluno;
  if (l == 'A'){
    mediaaluno = (x + y + z) / 3;
  }
  else if (l == 'P'){
    mediaaluno = ((x*5) + (y*3) + (z*2)) / (5+3+2);
  }
  printf("A média do aluno foi de: %.2f", mediaaluno);
}



int main(void) {
  int a, b , c, num;
  char u;
  float mediadaluno;
  printf("Informe o número de alunos \n");
  scanf("%d", &num);
  for (int i = 1; i <= num ; i++){
    printf("\nInforme as 3 notas do aluno %d\n", i);
    scanf("%d %d %d", &a, &b, &c);
    printf("Informe o tipo da média a ser calculada:\n");
    scanf(" %c", &u);
    media(a, b, c, u);
  }
}