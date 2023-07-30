#include <stdio.h>

void PreencheVec(float vec1[10], float vec2[10])
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vec1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vec2[i]);
    }
}

void Juntavec(float vec1[10], float vec2[10], float vec3[20])
{
    int posicaopar = 0, posicaoimpar = 0;
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            vec3[i] = vec2[posicaopar];
            posicaopar++;
        }
        else
        {
            vec3[i] = vec1[posicaoimpar];
            posicaoimpar++;
        }
    }
}

void Printavec(float vec[20])
{
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", vec[i]);
    }
}

int main(void)
{
    float x[10], y[10], z[20];
    PreencheVec(x, y);
    Juntavec(x, y, z);
    Printavec(z);
    return 0;
}
