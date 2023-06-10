#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num;
	
	printf("Digite um numero:");
	scanf("%d",&num);
	
	tabuada(num);
	
	return 0;
}

void tabuada(int n1){
	int i;
	float result;
	
	printf("----------------Soma------------------\n\n");
	
	for(i = 1; i < 11; i++){
		result = n1 + i;
		printf("%d + %d = %.0f \n",n1,i,result);
	}
	
	printf("----------------Subtração------------------\n\n");
	
	for(i = 1; i < 11; i++){
		result = n1 - i;
		printf("%d - %d = %.0f \n",n1,i,result);
	}
	
	printf("----------------Multiplicação------------------\n\n");
	
	for(i = 1; i < 11; i++){
		result = n1 * i;
		printf("%d x %d = %.0f \n",n1,i,result);
	}	
	
	printf("----------------Divisão------------------\n\n");
	
	for(i = 1; i < 11; i++){
		if(i != 0){
			result = (float) n1 / i;
			printf("%d / %d = %.2f\n", n1, i, result);
		}
	}		
}
