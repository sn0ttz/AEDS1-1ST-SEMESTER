#include <stdio.h>
#include <string.h>

void PrintInverso(char *vec)
{
    for (int i = 0, j = strlen(vec) - 1; i < strlen(vec); i++, j--)
    {
        printf("%c", vec[j]);
    }
}

int main(void)
{
    char str[100];
    gets(str);
    PrintInverso(str);

    return 0;
}