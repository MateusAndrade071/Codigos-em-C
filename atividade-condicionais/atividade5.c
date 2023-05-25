#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,soma,produto;
    float media;

    printf("Me diga um valor: ");
    scanf("%d",&a);

    printf("Me diga outro valor: ");
    scanf("%d",&b);

    soma = a + b;
    media = soma /2;
    produto = a * b;

    if(a == b){
        printf("os numeros sao iguais \n");
    }else if(a > b){
        printf("O maior numero e %d \n",a);
        printf("O menor numero e %d \n",b);
    }else{
        printf("O menor numero e %d \n",a);
        printf("O maior numero e %d \n",b);
    }
    printf("Soma: %d \n",soma);
    printf("Media: %f \n",media);
    printf("Produto: %d \n",produto);
}