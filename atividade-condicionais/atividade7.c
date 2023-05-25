#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if(idade >= 18 && idade <= 65){
        printf("precisa votar!!");
    }else{
        printf("Nao precisa votar");
    }
}