#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	if (num > 0){
		printf("O numero eh positivo");
	} else if ( num < 0){
		printf("O numero eh negativo");
	}else{
		printf("O numero eh zero");
	}
	
	
	
	return 0;
}
