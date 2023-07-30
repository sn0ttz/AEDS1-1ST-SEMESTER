#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main(int argc, char const *argv[])
{
    FILE *arquivo;
    char text[MAX_SIZE];
    arquivo = fopen("arquivo.txt", "w");

    fgets(text, MAX_SIZE, stdin);
    fprintf(arquivo, "%s", text);

    fclose(arquivo);

    return 0;
}