#include <stdio.h>

int main()
{
    FILE *arquivo;
    char linha[100];
    int i = 0;

    arquivo = fopen("texto.txt", "r");

    while (fgets(linha, 100, arquivo) != NULL)
    {
        printf("%s", linha);
        i++;
    }

    fclose(arquivo);

    printf("\n%d LINHAS", i);

    return 0;
}
