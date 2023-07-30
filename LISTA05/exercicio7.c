#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, vogais = 0;
    char letra;
    FILE *arquivo;

    scanf("%d", &n);

    arquivo = fopen("letras.txt", "w");

    for (i = 1; i <= n; i++)
    {
        scanf(" %c", &letra);
        fputc(letra, arquivo);
    }

    fclose(arquivo);

    arquivo = fopen("letras.txt", "r");

    while ((letra = fgetc(arquivo)) != EOF)
    {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
            vogais++;
        }
    }

    printf("%d\n", vogais);

    fclose(arquivo);

    return 0;
}
