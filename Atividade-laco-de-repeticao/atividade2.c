#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,numero;
    int par = 0,impar = 0;

    for(i = 0; i < 5; i++){
        printf("Me diga o %d numero:",i);
        scanf("%d",&numero);

        if(numero % 2 == 0){
            par = par + 1;
        }else{
            impar = impar + 1;
        }
    }

    printf("Quantidade de numeros pares: %d \n",par);
    printf("Quantidade de numeros impares: %d \n",impar);

    return 0;
}