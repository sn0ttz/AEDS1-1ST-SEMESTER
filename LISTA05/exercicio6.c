#include <stdio.h>

int main()
{
    int numero, divisor, soma = 0;
    FILE *arquivo;

    scanf("%d", &numero);

    arquivo = fopen("divisores.txt", "w");

    printf("Divisores de %d:\n", numero);

    for (divisor = 1; divisor <= numero; divisor++)
    {
        if (numero % divisor == 0)
        {
            printf("%d ", divisor);
            soma += divisor;
        }
    }

    fprintf(arquivo, "A soma dos divisores de %d e igual a %d", numero, soma);

    fclose(arquivo);

    return 0;
}
