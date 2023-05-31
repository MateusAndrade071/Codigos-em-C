#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int i,num[5],maiorNum,menorNum = 9999;
	
	for(i = 0; i < 5; i++){
		printf("Me diga um numero:");
		scanf("%d",&num[i]);
		
		if(num[i] > maiorNum){
			maiorNum = num[i];
		}
		if(num[i] < menorNum){
			menorNum = num[i];
		}
	}
	system("cls");
	
	for(i = 0; i < 5; i++){
		printf("Numeros: %d \n",num[i]);
	}
	
	printf("Maior número: %d \n",maiorNum);
	printf("Menor número: %d \n",menorNum);
}
