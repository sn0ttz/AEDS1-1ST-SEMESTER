#include <stdio.h>
#include <stdlib.h>

void Maior(int *vec, int t)
{
    int maior = -2000000;
    for (int i = 0; i < t; i++)
    {
        if (vec[i] > maior)
        {
            maior = vec[i];
        }
    }
    printf("O maior numero do vetor e: %d", maior);
}

int main(void)
{
    int *vec, tam;
    scanf("%d", &tam);
    vec = (int *)malloc(tam); // ALOCAR O VETOR NA MEMORIA
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vec[i]);
    }

    Maior(vec, tam);

    return 0;
}
