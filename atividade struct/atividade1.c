#include <stdio.h>
#include <stdlib.h>

struct dados{
	char nome[5][250];
	int idade[5];
	float peso[5];
	float altura[5];
};

int main(){
	int i;
	struct dados dados[5];
	
	for(i = 0; i < 5; i++){
		printf("Me diga seu nome:\n");
		gets(dados[i].nome[i]);
		fflush(stdin);
		printf("Digite sua idade:\n");
		scanf("%d",&dados[i].idade[i]);
		printf("Qual seu peso?\n");
		scanf("%f",&dados[i].peso[i]);
		fflush(stdin);
		printf("Qual sua altura?\n");
		scanf("%f",&dados[i].altura[i]);
		fflush(stdin);
	}
	system("cls");
	
	for(i = 0; i < 5; i++){
		printf("Nome: %s\n",dados[i].nome[i]);
		printf("Idade: %d\n",dados[i].idade[i]);
		printf("Peso: %.2f\n",dados[i].peso[i]);
		printf("Altura: %.2f\n",dados[i].altura[i]);
		printf("\n");
	}
}
