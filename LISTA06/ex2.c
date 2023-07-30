#include <stdio.h>
#include <stdlib.h>

void PrintVec(float vec[10], int tamvec)
{
    for (int i = 0; i < tamvec; i++)
    {
        printf("%.2f ", vec[i]);
    }
}

void NegVec2(float vec[10], int tamvec)
{
    int posicao = 0;
    float vecneg[tamvec];
    for (int i = 1; i <= 10; i++)
    {
        if (vec[i] < 0)
        {
            vecneg[posicao] = vec[i];
            posicao++;
        }
    }
    PrintVec(vecneg, tamvec);
}

void NegVec(float vec[10])
{
    int qtdneg = 0;
    for (int i = 0; i < 10; i++)
    {
        if (vec[i] < 0)
        {
            qtdneg++;
        }
    }
    NegVec2(vec, qtdneg);
}

void Preenchevec(float vec[10])
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vec[i]);
    }
}

int main(void)
{
    float x[10];
    Preenchevec(x);

    NegVec(x);
    return 0;
}
