#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1,num2;
	
	printf("Digite o 01 numero: \n");
	scanf("%d",&num1);
	
	printf("Digite o 02 numero: \n");
	scanf("%d",&num2);
	
	menor(num1,num2);
	
	return 0;
}

void menor(int n1, int n2){
	if(n1 < n2){
		printf("O menor valor eh: %d",n1);
	}else{
		printf("O menor valor eh: %d",n2);
	}
}
