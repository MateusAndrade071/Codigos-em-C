#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, ""); // aceitar acentos
	
	int i;
	float soma = 0,num[3],media;
	
	for(i = 0; i < 3; i++){
		printf("Me diga uma nota: ");
		scanf("%f",&num[i]);
		soma = soma + num[i];
	}
	
	media = soma / i;
	system("cls");
	
	for(i = 0; i < 3; i++){
		printf("Notas: %f \n",num[i]);
	}
	
	printf("A soma das notas é: %f \n",soma);
	printf("A média das notas é: %f \n",media);
}
