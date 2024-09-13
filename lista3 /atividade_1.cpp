#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int num, fatorial;
	
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%i", &num);
	
	fatorial = 1; 
	
	while(num != 1){
		fatorial *= num;
		num --;
	}
		
	printf("%i", fatorial);
	
	return 0;
}
