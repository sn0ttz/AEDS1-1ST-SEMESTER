#include <stdio.h>

void PreencheMat(int mat[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void SomaMat(int mat[4][4])
{
    int soma = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                soma += mat[i][j];
            }
        }
    }
    printf("\n%d", soma);
}

int main(void)
{
    int m[4][4];
    PreencheMat(m);
    SomaMat(m);
    return 0;
}
