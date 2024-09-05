#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if (num % 2 == 0){
		printf("o numero eh par.");
	} else if (num % 2 != 0){
		printf("o numero eh impar.");
	} else {
		printf("o numero eh neutro");
	}
	
	
	return 0;
}
