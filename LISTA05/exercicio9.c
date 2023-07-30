#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, matricula, telefone;
    scanf("%d", &n);

    FILE *arq;
    arq = fopen("saida.txt", "w");

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &matricula);
        fprintf(arq, "%d ", matricula);

        scanf("%d", &telefone);
        fprintf(arq, "%d\n", telefone);
    }

    fclose(arq);

    return 0;
}
