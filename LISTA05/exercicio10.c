#include <stdio.h>

int main()
{
    FILE *arq;
    arq = fopen("entrada.txt", "r");
    float num, soma = 0, max, min;

    fscanf(arq, "%f", &num);
    max = num;
    min = num;

    int count = 1;
    while (!feof(arq))
    {
        soma += num;
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
        fscanf(arq, "%f", &num);
        count++;
    }

    float media = soma / count;

    printf("%f\n", max);
    printf("%f\n", min);
    printf("%f\n", media);

    fclose(arq);

    return 0;
}
