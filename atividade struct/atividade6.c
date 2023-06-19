#include <stdio.h>
#include <stdlib.h>

struct dados{
	int matricula[2];
	char nome[2][250];
	float notas[2][2];
};

int main(){
	int i,j;
	float somaNotas,media[2];
	struct dados dados[2];
	
	for(i= 0 ; i < 2 ; i++){
		printf("Digite a matricula:\n");
		scanf("%d",&dados[i].matricula[i]);
		fflush(stdin);
		printf("Qual seu nome?\n");
		gets(dados[i].nome[i]);
			for(j = 0; j < 2; j++){
				printf("Me diga a nota \n");
				scanf("%f",&dados[i].notas[i][j]);
				somaNotas += dados[i].notas[i][j];
			}
				media[i] = somaNotas / 2;
				somaNotas = 0;
	}
	
	for(i=0; i<2; i++){
		printf("Matricula: %d\n",dados[i].matricula[i]);
		printf("Nome: %s\n",dados[i].nome[i]);
		for(j=0;j<2;j++){
			printf("Nota: %.2f\n",dados[i].notas[i][j]);
		}
		printf("Media: %.2f\n",media[i]);
	}
}
