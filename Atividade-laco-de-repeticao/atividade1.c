#include <stdio.h>
#include <stdlib.h>

int main(){
    char resp;
    int i = 0;
    float soma,notas,media;

    do{
        printf("Me diga uma nota: \n");
        scanf("%f",&notas);

        printf("Quer dizer mais uma nota? s/n \n");
        scanf(" %c",&resp);

        soma = soma + notas;
        i = i + 1;

    }while(resp == 's');

    media = soma / i;
    printf("A media das notas e: %.2f\n", media);

    return 0;

}