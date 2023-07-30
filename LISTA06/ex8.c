#include <stdio.h>

void preencherMatriz(int matriz[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void trocarLinhas(int matriz[10][10], int linha1, int linha2)
{
    int i, temp;
    for (i = 0; i < 10; i++)
    {
        temp = matriz[linha1][i];
        matriz[linha1][i] = matriz[linha2][i];
        matriz[linha2][i] = temp;
    }
}

void trocarColunas(int matriz[10][10], int coluna1, int coluna2)
{
    int i, temp;
    for (i = 0; i < 10; i++)
    {
        temp = matriz[i][coluna1];
        matriz[i][coluna1] = matriz[i][coluna2];
        matriz[i][coluna2] = temp;
    }
}

void trocarDiagonais(int matriz[10][10])
{
    int i, temp;
    for (i = 0; i < 10; i++)
    {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }
}

void trocarLinhaComColuna(int matriz[10][10], int linha, int coluna)
{
    int i, temp;
    for (i = 0; i < 10; i++)
    {
        temp = matriz[linha][i];
        matriz[linha][i] = matriz[i][coluna];
        matriz[i][coluna] = temp;
    }
}

void exibirMatriz(int matriz[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[10][10];
    preencherMatriz(matriz);

    printf("Matriz original:\n");
    exibirMatriz(matriz);

    trocarLinhas(matriz, 1, 7);
    printf("\n");
    exibirMatriz(matriz);

    trocarColunas(matriz, 3, 9);
    printf("\n");
    exibirMatriz(matriz);

    trocarDiagonais(matriz);
    printf("\n");
    exibirMatriz(matriz);

    trocarLinhaComColuna(matriz, 4, 9);
    printf("\n");
    exibirMatriz(matriz);

    return 0;
}
