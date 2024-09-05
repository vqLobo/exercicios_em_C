#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float num1, num2;
	
	printf("Digite um numero: ");
	scanf("%f", &num1);
	
	printf("Digite um segundo numero: ");
	scanf("%f", &num2);
	
	if (num1 < num2){
		printf("O %2.f eh maior que o numero %2.f", num2, num1);
	} else if(num1 > num2){
		printf("O %2.f eh maior que o numero %2.f", num1, num2);
	}else {
		printf("Eles sao iguais");
	}

	
	return 0;
}
