#include <stdio.h>

void SomaVec(int *vec, int tam)
{
    int somavec = 0;
    for (int i = 0; i < tam; i++)
    {
        somavec += vec[i];
    }
    printf("A soma dos elementos do vetor e de: %d", somavec);
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
    SomaVec(vec, tam);

    return 0;
}
