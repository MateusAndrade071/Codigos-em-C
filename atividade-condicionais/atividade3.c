#include<stdio.h>
#include<stdlib.h>

int main(){
    char nome[150];
    int idade,i;
    float nota[3],media,soma;

    printf("Me diga seu nome: ");
    gets(nome);

    fflush(stdin);

    printf("Me diga sua idade: ");
    scanf("%d",&idade);

    for(i = 0; i < 3; i++){
    	printf("Me diga uma nota: ");
        scanf("%f",&nota[i]);
        soma = soma + nota[i];
	}

    media = soma /3;

    if(media >= 7){
        printf("%s foi APROVADO com a media %f",nome,media);
    }else if(media >= 5){
        printf("%s foi para a RECUPERACAO com a media %f",nome,media);
    }else{
        printf("%s foi REPROVADO com a media %f",nome,media);
    }

    return 0;
    system("pause");
}