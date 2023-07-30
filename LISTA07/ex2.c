#include <stdio.h>
#include <string.h>

void Trocas(char *a, char *b) // FUNC PARA TROCAR CARACTERES
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// FUNC PARA PRINTAR A STRING APOS AS TROCAS
void PrintPermutacoes(char *str, int a, int b)
{
    if (a == b)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            Trocas((str + a), (str + i));
            PrintPermutacoes(str, a + 1, b);
            Trocas((str + a), (str + i));
        }
    }
}

int main()
{
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // TIRAR O \N
    int tam = strlen(str);

    printf("Permutações:\n");
    PrintPermutacoes(str, 0, tam - 1);

    return 0;
}
