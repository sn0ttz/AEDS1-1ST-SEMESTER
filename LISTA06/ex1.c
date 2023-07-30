#include<stdio.h>

void Preenchevec (float vec[10])
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vec[i]);
    }
}

void Calcmedia (float vec[10])
{
     float somanotas = 0;
     int passou = 0;
     for (int i = 0; i <10; i++)
     {
        somanotas += vec[i];
        if (vec[i] > 5)
        {
            passou++;
        }
      }
     printf("A média das notas da turma foi de %.2f", somanotas/10);
     printf("\n%d alunos passaram", passou);
}

int main(void)
{
    float vecnotas[10];
    Preenchevec(vecnotas);
    Calcmedia(vecnotas);
    return 0;    
}

    