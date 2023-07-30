#include <stdio.h>

float mediaAprov(int n) {
    float nota, soma = 0;
    int aprovados = 0;

    for (int i = 1; i <= n; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 6) {
            soma += nota;
            aprovados++;
        }
    }

    if (aprovados == 0) {
        return 0;
    } else {
        return soma / aprovados;
    }
}

int main() {
    int num;
    printf("Digite o numero de alunos: ");
    scanf("%d", &num);

    float media = mediaAprov(num);

    if (media == 0) {
        printf("Nenhum aluno foi aprovado.\n");
    } else {
        printf("Media das notas dos alunos aprovados: %.2f\n", media);
    }

    return 0;
}