#include <stdio.h>

void BubbleSort(int *vec, int tam)
{
    int temp;
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if (vec[j] > vec[j + 1]) // COMPARA A VARIAVEL DE INDICE J COM A DE J+1, FAZENDO A TROCA CASO J SEJA MAIOR
            {
                temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int vec[5];
    for (int i = 0; i < 5; i++) // SCANFA VEC
    {
        scanf("%d", &vec[i]);
    }
    BubbleSort(vec, 5);
    for (int i = 0; i < 5; i++) // PRINTA VEC
    {
        printf("%d ", vec[i]);
    }

    return 0;
}
