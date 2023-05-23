#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,media;
    
    printf("Me diga um numero:");
    scanf("%f",&a);

    printf("Me diga outro numero: ");
    scanf("%f",&b);

    media = (a + b) / 2;

    if(media >= 7){
        printf("Aprovado!! com a media: %f",media);
    }else if(media >= 5) {
        printf("Recuperacao!! com a media: %f",media);
    }else{
        printf("Reprovado!! com a media: %.2f",media);
    }

    return 0;
}