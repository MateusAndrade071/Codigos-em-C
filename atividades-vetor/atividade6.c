#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int i;
	float num[10];
	float neg,soma;
	
	for(i = 0; i < 10; i++){
		printf("Me diga um número:");
		scanf("%f",&num[i]);
		
		if(num[i] < 0){
			neg++;
		}
		if(num[i] > 0){
			soma += num[i];
		}
	}
	system("cls");
	
	for(i = 0; i < 10; i++){
		printf("Numero %d: %f\n",i,num[i]);
	}
	
	printf("Soma dos numeros positivos: %f\n",soma);
	printf("Quantidade de números negativos: %f",neg);
}
