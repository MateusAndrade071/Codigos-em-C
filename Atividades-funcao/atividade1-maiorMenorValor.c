#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1,num2;
	
	printf("Digite o 01 numero: \n");
	scanf("%d",&num1);
	
	printf("Digite o 02 numero: \n");
	scanf("%d",&num2);
	
	maiorMenor(num1,num2);
	
	return 0;
}

void maiorMenor(int n1, int n2){
	if(n1 == n2){
		printf("Os numeros sao iguais.");
	}else if(n1 > n2){
		printf("Maior Valor: %d\n",n1);
		printf("Menor Valor: %d\n",n2);
	}else{
		printf("Maior Valor: %d\n",n2);
		printf("Menor Valor: %d\n",n1);
	}
}
