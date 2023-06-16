#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void menu(){
	printf("[========= CARDÁPIO =========]\n");
	printf("[100] - Cachorro quente: R$ 1,70\n");
	printf("[101] - Bauru simples: R$ 2,30\n");
	printf("[102] - Bauru com ovo: R$ 2,60\n");
	printf("[103] - Hambúrguer: R$ 2,40\n");
	printf("[104] - Cheeseburguer: R$ 2,50\n");
	printf("[105] - Refrigerante: R$ 1.00\n");
	printf("[0] - Encerrar pedido\n");
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int opc,quantidadePedido;
	float somaProduto=0,totalPedidos=0;
	
	do{
		menu();
		printf("Escolha o que deseja:\n");
		scanf("%d",&opc);
		
		switch(opc){
			case 100:
				printf("= Escolhido Cachorro Quente =\n");
				printf("Quantos deseja?\n");
				scanf("%d",&quantidadePedido);
				system("cls");
				somaProduto = quantidadePedido * 1.70;
				printf("Valor do cachorro quente: %.2f\n",somaProduto);
				totalPedidos += somaProduto;
			break;
			
			case 101:
				printf("= Escolhido Bauru Simples =\n");
				printf("Quantos deseja?\n");
				scanf("%d",&quantidadePedido);
				system("cls");
				somaProduto = quantidadePedido * 2.30;
				printf("Valor do bauru simples: %.2f\n",somaProduto);
				totalPedidos += somaProduto;
			break;
			
			case 102:
				printf("= Escolhido Bauru com ovo =\n");
				printf("  Quantos deseja?\n");
				scanf("%d",&quantidadePedido);
				system("cls");
				somaProduto = quantidadePedido * 2.60;
				printf("Valor do bauru com ovo: %.2f\n",somaProduto);
				totalPedidos += somaProduto;
			break;
			
			case 103:
				printf("= Escolhido hambúrguer =\n");
				printf("Quantos deseja?\n");
				scanf("%d",&quantidadePedido);
				system("cls");
				somaProduto = quantidadePedido * 2.40;
				printf("Valor do Hambúrguer: %.2f\n",somaProduto);
			break;
			
			case 104:
				printf("= Escolhido Cheeseburguer =\n");
				printf("Quantos deseja?\n");
				scanf("%d",&quantidadePedido);
				system("cls");
				somaProduto = quantidadePedido * 2.50;
				printf("Valor do Cheeseburguer: %.2f\n",somaProduto);
				totalPedidos += somaProduto;
			break;
			
			case 105:
				printf("= Escolhido Refrigerante =\n");
				printf("Quantos deseja?\n");
				scanf("%d",&quantidadePedido);
				system("cls");
				somaProduto = quantidadePedido * 1.00;
				printf("Valor do Refrigerante: %.2f\n",somaProduto);
				totalPedidos += somaProduto;
			break;
			
			case 0:
				printf("Calculando Valor Total...");
				sleep(2);
			break;
			
			default:
				printf("Produto inválido Tente novamente!");
			break;
		}
			printf("\n");
			sleep(3);
			system("cls");
	}while(opc != 0);
			printf("Valor total da compra: %.2f",totalPedidos);
}
