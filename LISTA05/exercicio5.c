#include <stdio.h>

int main()
{
    FILE *arquivo1, *arquivo2, *arquivo3;
    char letra;

    arquivo1 = fopen("arquivo1.txt", "r");
    arquivo2 = fopen("arquivo2.txt", "r");
    arquivo3 = fopen("arquivo3.txt", "w");

    while ((letra = fgetc(arquivo1)) != EOF)
    {
        fputc(letra, arquivo3);
    }

    while ((letra = fgetc(arquivo2)) != EOF)
    {
        fputc(letra, arquivo3);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    return 0;
}
