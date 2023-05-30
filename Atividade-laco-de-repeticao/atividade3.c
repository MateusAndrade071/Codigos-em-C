#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,soma = 0,num;

    for(i = 0; i < 5; i++){
        printf("Me diga o %d numero: ",i);
        scanf("%d",&num);
        soma = soma + num;
    }

    printf("Soma dos numeros e: %d",soma);

    return 0;
}