#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char opc;
	int soma = 0,i;
	float valor,subtracao,divisao,multiplicacao;
	
	printf("Me diga uma operação matemática que deseja (+ - / *)\n");
	scanf("%c",&opc);
	system("cls");
	
	switch(opc){
		case '+':
			printf("A escolhida foi soma!!\n");
			for(i = 0; i < 2; i++){
				printf("Me diga o %d valor:\n", i+1);
				scanf("%f",&valor);
				soma += valor;
			}
			printf("Valor da soma é: %d",soma);
		break;
		
		case '-':
			printf("A escolhida foi subtração!!\n");
			for(i = 0; i < 2; i++){
				printf("Me diga o %d valor:\n", i+1);
				scanf("%f",&valor);
				if(i == 0){
					subtracao = valor;
				}else{
					subtracao -= valor;
				}
			}
			printf("Valor da subtração é: %.2f",subtracao);
		break;
		
		case '*':
			printf("A escolhida foi multiplicação!!\n");
			for(i = 0; i < 2; i++){
				printf("Me diga o %d valor:\n", i+1);
				scanf("%f",&valor);
				if(i == 0){
					multiplicacao = valor;
				}else{
					multiplicacao *= valor;
				}
			}
			printf("Valor da multiplicação é: %.0f",multiplicacao);
		break;
		
		case '/':
			printf("A escolhida foi divisão!!\n");
			for(i = 0; i < 2; i++){
				printf("Me diga o %d valor:\n", i+1);
				scanf("%f",&valor);
				if(i == 0){
					divisao = valor;
				}else{
					divisao /= valor;
				}
			}
			printf("Valor da divisão é: %.2f",divisao);
		break;
		
		default:
			printf("Operação inválida!\n");
		break;
	}
}
