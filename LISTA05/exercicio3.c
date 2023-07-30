#include <stdio.h>

int main()
{
    FILE *arquivo;
    char c;
    int count = 0;

    arquivo = fopen("arquivo.txt", "r");

    while ((c = fgetc(arquivo)) != EOF)
    {
        if (c == 'a' || c == 'A')
        {
            count++;
        }
    }

    fclose(arquivo);
    printf("%d CARACTERES", count);

    return 0;
}