#include <stdio.h>

void PrintInverso(int *vec, int tam)
{
    for (int i = 0, j = tam - 1; i < tam; i++, j--)
    {
        printf("%d ", vec[j]);
    }
}

int main(void)
{
    int tam;
    scanf("%d", &tam); // SCANFA O TAMANHO
    int vec[tam];
    for (int i = 0; i < tam; i++) // SCANFA O VEC
    {
        scanf("%d", &vec[i]);
    }
    PrintInverso(vec, tam);

    return 0;
}