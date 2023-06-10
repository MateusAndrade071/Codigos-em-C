#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int i;
	int idade[5];
	char nome[5][250];
	
	for(i = 0; i < 5; i++){
		printf("Qual seu nome? \n");
		gets(nome[i]);
		
		fflush(stdin);
		
		printf("Me diga sua idade: \n");
		scanf("%d",&idade[i]);
		
		fflush(stdin);
	}
	
	for(i = 0; i < 5; i++){
		printf("Nome: %s\n",nome[i]);
		printf("Idade: %d\n",idade[i]);
	}
	
}
