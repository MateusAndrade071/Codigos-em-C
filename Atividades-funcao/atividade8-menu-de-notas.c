#include <stdio.h>
#include <stdlib.h>

void menu(){
	printf("[1] - Mostrar nome da disciplina e a media\n");
	printf("[2] - O nome da disciplina e a situacao (aprovado, reprovado ou recuperacao)\n");
	printf("[3] - Exibir todas as informacoes;\n");
	printf("[4] - Sair do programa.\n");
}

void caso1(char disciplina[][250], float notas[][2], float media[]){
	int i,j;
	for(i = 0; i < 3; i++){
		printf("Disciplina %s:\n",disciplina[i]);
		printf("Media: %f\n",media[i]);
	}
}
int main(){
	char disciplina[3][250];
	float notas[3][2];
	float soma,media[3];
	int opcao,i,j;
	
	for(i = 0; i < 3; i++){
			printf("Me diga a %d disciplina: \n",i+1);
			scanf("%s",&disciplina[i]);
			soma = 0;
		for(j = 0; j < 2; j++){
			printf("Me diga a %d nota: \n",j+1);
			scanf("%f",&notas[i][j]);
						
			soma += notas[i][j];
		}
		media[i] = soma / j;
	}
	
	system("cls");
				
	
	menu();
	
	printf("Escolha uma dessas opcoes: \n");
	scanf("%d",&opcao);
	
	system("cls");
	
	do{	
		switch(opcao){
			case 1:
				// Mostrar nome da disciplina e a média
				caso1(disciplina, notas, media);	
			break;
		
			case 2:
				for(i = 0;i < 3; i++){
					printf("Materia (%s)\n",disciplina[i]);
						
					if(media[i] >= 7){
        				printf("APROVADO com a media %f\n",media[i]);
    				}else if(media[i] >= 5){
        				printf("RECUPERACAO com a media %f\n",media[i]);
    				}else{
        				printf("REPROVADO com a media %f\n",media[i]);
    				}
				}
			break;
		
			case 3:
				for(i = 0; i < 3; i++){
					printf("Materia (%s)\n",disciplina[i]);
						for(j = 0; j < 2; j++){
							printf("Nota %d: %f\n",j+1,notas[i][j]);
						}
					printf("Media: %f\n",media[i]);
				
					if(media[i] >= 7){
        				printf("APROVADO com a media %f\n",media[i]);
    				}else if(media[i] >= 5){
        				printf("RECUPERACAO com a media %f\n",media[i]);
    				}else{
        				printf("REPROVADO com a media %f\n",media[i]);
    				}
					printf("\n");
				}
			break;
		
			case 4:
				printf("Encerrando o programa...\n");
				exit(0);
			break;			
		}
			printf("\n");
       		menu();

        	printf("Escolha uma dessas opcoes: \n");
       	 	scanf("%d", &opcao);

        	system("cls");
	}while(opcao != 0);
	
	return 0;
}
