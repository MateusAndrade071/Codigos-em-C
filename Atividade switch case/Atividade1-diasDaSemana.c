#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void menu(){
	printf("[1] - Domingo\n");
	printf("[2] - segunda-feira\n");
	printf("[3] - terça-feira\n");
	printf("[4] - quarta-feira\n");
	printf("[5] - quinta-feira\n");
	printf("[6] - sexta-feira\n");
	printf("[7] - sábado\n");
	printf("[0] - sair\n");
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int opc;
	
	do{
		menu();
		printf("Me diga um dia: ");
		scanf("%d",&opc);
		printf("\n");
		
		switch(opc){
			case 1:
			case 7:
				printf("Fim de semana!\n");
			break;
			
			case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                printf("Dia útil!\n");
            break;
	
			case 0:
				printf("Saindo...\n");
			break;
			
			default:
				printf("Número inválido. Tente novamente!!\n");
			break;
		}
			sleep(3);
			system("cls");
	}while(opc != 0);
}
