#include <stdio.h>

int main(){
	
	int fatorial = 1;
	
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	
	for(int i = n; i > 1; i--){
		fatorial *= i;
	}
	
	printf("%i \n", fatorial);
	
	/*
	for(int i=1; i<= 10; i++){
		printf("%i \n", i);
	}
	*/
	
	return 0;
}
