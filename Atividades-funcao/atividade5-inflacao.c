#include <stdio.h>
#include <stdlib.h>

void governo(float n1){
		float novoPreco;
	if(n1 >= 100){
		novoPreco = n1 + (n1 * 0.1);
		printf("Valor maior ou igual a 100 reais entao valor inflaciona 10%%\n");
		printf("Valor: %f",novoPreco);
	}else{
		novoPreco = n1 + (n1 * 0.2);
		printf("Valor menor de 100 reais entao valor inflaciona 20%%\n");
		printf("Valor: %f",novoPreco);
	}
}

int main(){
	float valor;
	
	printf("Me diga o valor que deseja:");
	scanf("%f",&valor);

	system("cls");
	
	governo(valor);
	
	return 0;
}
