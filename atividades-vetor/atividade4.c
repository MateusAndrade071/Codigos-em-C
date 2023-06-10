#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int i,num[6],par =0,impar =0;
	
	for(i = 0; i < 6; i++){
		printf("Me diga um numero: \n");
		scanf("%d",&num[i]);
		
		if(num[i] % 2 == 0){
			par++;
		}else{
			impar++;
		}
	}
	
	printf("Quantidade de números par: %d\n",par);
	printf("Quantidade de números impar: %d\n",impar);
}
