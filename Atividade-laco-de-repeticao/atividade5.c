#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario,mediaSalario,filhos,mediaFilhos,somaSalario,somaFilhos;
	int i = 0;
	
	while(salario >= 0){
		printf("Obrigado por aceitar responder nossa pesquisa \n \n");
		
		printf("Quanto ganha de salario? \n");
		scanf("%f",&salario);
		
		printf("Possui quantos fihos? \n");
		scanf("%f",&filhos);
		
		if(salario >= 0){
			somaSalario += salario;
			somaFilhos += filhos;
			i++;
		}
		
	}
	
	mediaSalario = somaSalario / i;
	mediaFilhos = somaFilhos / i;
	
	printf("Media salarial da populacao: %f \n",mediaSalario);
	printf("Media de filhos da populacao %f \n",mediaFilhos);
	printf("Quantidade de pessoas entrevistadas: %d",i);
}
