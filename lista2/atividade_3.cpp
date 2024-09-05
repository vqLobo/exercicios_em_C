#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float num1, num2, num3;
	
	printf("Digite um numero: ");
	scanf("%f", &num1);
	
	printf("Digite um segundo numero: ");
	scanf("%f", &num2);
	
	printf("Digite um terceiro numero: ");
	scanf("%f", &num3);
	
	if ((num1 > num2 && num1 > num3)){
		
		printf("O numero %2.f eh o maior dos tres", num1);
		
	} else if ((num2 > num1 && num2 > num3)){
		
		printf("O numero %2.f eh o maior dos tres", num2);
		
	} else if ((num3 > num1 && num3 > num2)) {
		
		printf("O numero %2.f eh o maior dos tres", num3);
		
	} else {
		
		printf("Os numeros sao iguais.");
	}
		
	return 0;
}
