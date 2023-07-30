#include <stdio.h>
#include <time.h>

void PreencheMat(int mat1[4][6], int mat2[4][6])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
}

void SomaMat(int mat1[4][6], int mat2[4][6], int soma[4][6])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            soma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
}

void DifMat(int mat1[4][6], int mat2[4][6], int dif[4][6])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            dif[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", dif[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int a[4][6], b[4][6], s[4][6], d[4][6];
    PreencheMat(a, b);
    SomaMat(a, b, s);
    DifMat(a, b, d);
    return 0;
}
