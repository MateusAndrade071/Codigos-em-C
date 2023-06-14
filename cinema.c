#include <stdio.h>
#include <stdlib.h>

void menu(){
	printf("[1] - Exibir Mapa de Assentos");
	printf("[2] - Reservar Assento");
	printf("[3] - Cancelar reserva");
	printf("[4] - Sair");
}

void mapaAssentos(){
	int i,j;
	
	printf("   A   B   C   D   E   F   G   H   I  \n");
	for(i = 0; i < 9; i++){
		printf("%d ", i+1);
		for(j = 0; j < 9; j++){
			printf("[ ] ");
		}
		printf("\n");
	}
}

int main(){
	
	mapaAssentos();
	
	
	return 0;
}
