#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char opc;
	int soma = 0,i;
	float valor,subtracao,divisao,multiplicacao;
	
	printf("Me diga uma opera��o matem�tica que deseja (+ - / *)\n");
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
			printf("Valor da soma �: %d",soma);
		break;
		
		case '-':
			printf("A escolhida foi subtra��o!!\n");
			for(i = 0; i < 2; i++){
				printf("Me diga o %d valor:\n", i+1);
				scanf("%f",&valor);
				if(i == 0){
					subtracao = valor;
				}else{
					subtracao -= valor;
				}
			}
			printf("Valor da subtra��o �: %.2f",subtracao);
		break;
		
		case '*':
			printf("A escolhida foi multiplica��o!!\n");
			for(i = 0; i < 2; i++){
				printf("Me diga o %d valor:\n", i+1);
				scanf("%f",&valor);
				if(i == 0){
					multiplicacao = valor;
				}else{
					multiplicacao *= valor;
				}
			}
			printf("Valor da multiplica��o �: %.0f",multiplicacao);
		break;
		
		case '/':
			printf("A escolhida foi divis�o!!\n");
			for(i = 0; i < 2; i++){
				printf("Me diga o %d valor:\n", i+1);
				scanf("%f",&valor);
				if(i == 0){
					divisao = valor;
				}else{
					divisao /= valor;
				}
			}
			printf("Valor da divis�o �: %.2f",divisao);
		break;
		
		default:
			printf("Opera��o inv�lida!\n");
		break;
	}
}
