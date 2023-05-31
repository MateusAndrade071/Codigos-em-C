#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	float nota[4],soma,media;
	int i;
	
	for(i = 0; i < 4; i++){
		printf("Me diga uma nota: \n");
		scanf("%f",&nota[i]);
		soma += nota[i];
	}
	
	media = soma / i;
	
	if(media >= 7){
		printf("Aluno aprovado com a média de: %f",media);
	}else if(media >= 5){
		printf("Aluno em recuperação");
	}else{
		printf("Aluno Reprovado");
	}
}
