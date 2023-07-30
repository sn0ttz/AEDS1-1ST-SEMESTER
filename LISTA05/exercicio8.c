#include <stdio.h>

int main()
{
    int num_veiculos;
    float aluguel, faturamento, valorMulta, valorManutencao;

    scanf("%d", &num_veiculos);
    scanf("%f", &aluguel);

    faturamento = (num_veiculos / 3) * 12 * aluguel;

    valorMulta = (num_veiculos / 3) * 0.1 * aluguel;

    valorManutencao = num_veiculos * 0.02 * 600;

    printf("%.2f\n", faturamento);
    printf("%.2f\n", valorMulta);
    printf("%.2f\n", valorManutencao);

    FILE *arquivo = fopen("resultado.txt", "w");
    fprintf(arquivo, "%.2f\n", faturamento);
    fprintf(arquivo, "%.2f\n", valorMulta);
    fprintf(arquivo, "%.2f\n", valorManutencao);
    fclose(arquivo);

    return 0;
}
