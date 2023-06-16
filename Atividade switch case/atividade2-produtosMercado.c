#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void menu(){
	printf("[100] - Detergente valor: R$ 1,59\n");
	printf("[101] - Esponja valor: R$ 4,59\n");
	printf("[102] - Lã de aço valor: R$ 1,79\n");
	printf("[0] - sair\n");
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int opc,quantidadeProduto;
	float somaProduto,totalProdutos;
	
	do{
		menu();
		printf("Escolha o produto\n");
		scanf("%d",&opc);
		
		switch(opc){
			case 100:
				printf("Quantos produtos?\n");
				scanf("%d",&quantidadeProduto);
				system("cls");
				somaProduto = quantidadeProduto * 1.59;
				printf("Valor do(s) detergente(s): %.2f\n",somaProduto);
				totalProdutos += somaProduto;
			break;
			
			case 101:
				printf("Quantos produtos?\n");
				scanf("%d",&quantidadeProduto);
				system("cls");
				somaProduto = quantidadeProduto * 4.59;
				printf("Valor da(s) esponja(s): %.2f\n",somaProduto);
				totalProdutos += somaProduto;
			break;
			
			case 102:
				printf("Quantos produtos?\n");
				scanf("%d",&quantidadeProduto);
				system("cls");
				somaProduto = quantidadeProduto * 1.79;
				printf("Valor da(s) lã de aço(s): %.2f\n",somaProduto);
				totalProdutos += somaProduto;
			break;
			
			case 0:
				printf("Saindo...");
			break;
			
			default:
				printf("Produto inválido Tente novamente!");
			break;
		}
			printf("\n");
			sleep(3);
			system("cls");
	}while(opc != 0);
		printf("Valor total da compra: %.2f",totalProdutos);
}
