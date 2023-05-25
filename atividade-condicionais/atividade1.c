#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Me diga um numero: ");
    scanf("%d",&numero);

    if(numero > 10){
        printf("numero %d e maior que 10",numero);
    }else{
        printf("numero %d e menor que 10",numero);
    }

    system("pause");
    return 0;
}