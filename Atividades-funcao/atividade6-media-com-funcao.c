#include <stdio.h>
#include <stdlib.h>

void situacao(float media){
	float conta;
	conta = media / 3;
	
	if(conta >= 7){
		printf("Aluno aprovado\n");
		printf("Media: %f",conta);
	}else if(conta >= 5){
		printf("Aluno em recuperacao\n");
		printf("Media: %f",conta);
	}else{
		printf("Aluno Reprovado\n");
		printf("Media: %f",conta);
	}
}

int main(){
	float nota,soma;
	int i;
	
	for(i = 0; i < 3; i++){
		printf("Me diga a %d nota: ",i+1);
		scanf("%f",&nota);
		
		soma += nota;
	}
	system("cls");
	
	situacao(soma);
}
