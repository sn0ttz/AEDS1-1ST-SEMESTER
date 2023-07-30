#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ContaVogal(char *string)
{
    int countvogal = 0, countconsoante = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (tolower(string[i]) == 'a' || tolower(string[i]) == 'e' || tolower(string[i]) == 'i' || tolower(string[i]) == 'o' || tolower(string[i]) == 'u')
        {
            countvogal++;
        }
        else
        {
            countconsoante++;
        }
    }
    printf("Numero de vogais : %d\n", countvogal);
    printf("Numero de consoantes: %d\n", countconsoante);
}

int main(void)
{
    char string[100];
    gets(string);
    ContaVogal(string);
    return 0;
}
