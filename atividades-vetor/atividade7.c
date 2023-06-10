#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;
	int num[6];
	
	while(num[i] % 2 == 0){
		for(i = 0; i < 6; i++){
			printf("Me diga um número: \n");
			scanf("%d",&num[i]);
		}
	}	

	
	for(i = 5; i >= 0; i--){
		printf("Numero: %d\n",num[i]);
	}	
}
