#include <stdio.h>
void Imprimevec(int *vetor, int tam) // IMPRIMIR VETOR
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int main(void)
{
    int tam;
    scanf("%d", &tam);
    int vec[tam];
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vec[i]);
    }
    Imprimevec(vec, tam);
    return 0;
}
