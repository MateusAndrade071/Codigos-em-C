#include <stdio.h>

int main() {
    int quantidadeNotas, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadeNotas);

    for (i = 1; i <= quantidadeNotas; i++) {
        do {
            printf("Digite a nota %d: ", i);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10) {
                printf("Nota invalida. Digite novamente.\n");
            }
        } while (nota < 0 || nota > 10);

        soma += nota;
    }

    media = soma / quantidadeNotas;

    if (media >= 7) {
        printf("Aluno aprovado!\n");
    } else if (media >= 5) {
        printf("Aluno em recuperacao.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}

