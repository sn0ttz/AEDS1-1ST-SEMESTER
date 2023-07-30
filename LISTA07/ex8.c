#include <stdio.h>

int main()
{
    char alfabeto[26];
    char *ptr = alfabeto;

    for (char letras = 'A'; letras <= 'Z'; letras++)
    {
        *ptr = letras;
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
