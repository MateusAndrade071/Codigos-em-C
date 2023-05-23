#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota[4], media, soma = 0;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Me diga uma nota: ");
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }
    
    media = soma / 4;

    if(media >= 7){
        printf("APROVADO!! com a media %f",media);
    }else if(media >= 5){
        printf("RECUPERAÇÃO!! com media %f",media);
    }else{
        printf("REPROVADO!! com a media %f",media);
    }

    system("pause");
    return 0;
}
