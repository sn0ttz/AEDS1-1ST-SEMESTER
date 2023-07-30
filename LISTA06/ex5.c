#include <stdio.h>
#include <time.h>
void PreencheMat(int mat[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

int FuncA(int mat[5][5])
{
    int somamat = 0;
    for (int i = 0; i < 5; i++)
    {
        somamat += mat[3][i];
    }
    return somamat;
}

int FuncB(int mat[5][5])
{
    int somamat = 0;
    for (int i = 0; i < 5; i++)
    {
        somamat += mat[i][1];
    }
    return somamat;
}

int FuncC(int mat[5][5])
{
    int somamat = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                somamat += mat[i][j];
            }
        }
    }
    return somamat;
}

int FuncD(int mat[5][5])
{
    int somamat = 0;
    for (int i = 0; i < 5; i++)
    {
        somamat += mat[i][4 - i];
    }

    return somamat;
}

int FuncE(int mat[5][5])
{
    int somamat = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            somamat += mat[i][j];
        }
    }
    return somamat;
}

int main(void)
{
    int m[5][5], a, b, c, d, e;
    PreencheMat(m);
    a = FuncA(m);
    b = FuncB(m);
    c = FuncC(m);
    d = FuncD(m);
    e = FuncE(m);
    printf("A = %d", a);
    printf("\nB = %d", b);
    printf("\nC = %d", c);
    printf("\nD = %d", d);
    printf("\nE = %d", e);
    return 0;
}
