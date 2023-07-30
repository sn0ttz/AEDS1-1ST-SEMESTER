#include <stdio.h>

void PreencheVec(float vec[31])
{
    for (int i = 0; i < 31; i++)
    {
        scanf("%f", &vec[i]);
    }
}

void MaiorNum(float vec[31])
{
    float maior = -2000;
    for (int i = 0; i < 31; i++)
    {
        if (vec[i] > maior)
        {
            maior = vec[i];
        }
    }
    printf("\nA maior temperatura foi de %.2f", maior);
}
void MenorNum(float vec[31])
{
    float menor = 999999;
    for (int i = 0; i < 31; i++)
    {
        if (vec[i] < menor)
        {
            menor = vec[i];
        }
    }
    printf("\nA menor temperatura foi de %.2f", menor);
}

void MediaTemp(float vec[31])
{
    float somatemp = 0, media;
    int menorqmedia = 0;
    for (int i = 0; i < 31; i++)
    {
        somatemp += vec[i];
    }
    media = somatemp / 31;
    printf("\nA temperatura media foi de %.2f", media);
    for (int i = 0; i < 31; i++)
    {
        if (vec[i] < media)
        {
            menorqmedia++;
        }
    }
    printf("\nHouveram %d dias em que a temperatura foi menor que a media", menorqmedia);
}

int main(void)
{
    float vec[31];
    PreencheVec(vec);
    MaiorNum(vec);
    MenorNum(vec);
    MediaTemp(vec);
    return 0;
}
