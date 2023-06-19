#include <stdio.h>
#include <stdlib.h>

struct aluno{
	char aluno[5][250];
	float notas[5][3];
	int matricula[5];
};

int main(){
	int i,j;
	float media[3];
	float somaNotas =0;
	float maiorNota =0;
	float menorMedia =9999,maiorMedia=0;
	
	struct aluno aluno[5];
	
	for(i = 0; i < 5; i++){
		printf("Qual sua matricula?\n");
		scanf("%d",&aluno[i].matricula[i]);
		fflush(stdin);
		printf("Digite o nome do aluno:\n");
		gets(aluno[i].aluno[i]);
		for(j = 0; j < 3; j++){
			printf("Diga sua nota: \n");
			scanf("%f",&aluno[i].notas[i][j]);
			somaNotas += aluno[i].notas[i][j];
			
			if(aluno[i].notas[i][j] > maiorNota){
				maiorNota = aluno[i].notas[i][j];
			}
		}
			media[i] = somaNotas / 3;
			somaNotas = 0;
			if(media[i] > maiorMedia){
				maiorMedia = media[i];
			}
			if(media[i] < menorMedia){
				menorMedia = media[i];
			}
	}
	system("cls");
	
	for(i = 0; i < 5; i++){
		printf("Matricula: %d\n",aluno[i].matricula[i]);
		printf("Aluno: %s\n",aluno[i].aluno[i]);
			for(j = 0; j < 3; j++){
				printf("Nota %d: %.2f\n",j+1,aluno[i].notas[i][j]);
			}
		printf("Media: %.2f\n",media[i]);
		printf("\n");
	}
	printf("Maior Nota das primeiras Provas: %.2f\n",maiorNota);
	printf("Maior média: %.2f\n",maiorMedia);
	printf("Maior média: %.2f\n",menorMedia);
	
}
