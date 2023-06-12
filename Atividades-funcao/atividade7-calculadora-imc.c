#include <stdio.h>
#include <stdlib.h>

void imc(float n1, float n2) {
    float calculoImc;

    calculoImc = n2 / (n1 * n1);

    printf("Indice de massa corporal: %.2f\n", calculoImc);
}

int main() {
    float tamanho, peso;

    printf("Digite aqui o seu tamanho em metros: ");
    scanf("%f", &tamanho);

    printf("Digite aqui o seu peso: ");
    scanf("%f", &peso);

    imc(tamanho, peso);
    
    return 0;
}

