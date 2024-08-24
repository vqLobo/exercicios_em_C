#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	float num1, num2, soma, sub, mult, div;
	
	printf("Digite um numero: ");
	scanf("%f", &num1);
	
	printf("Digite outro (ou nao) numero: ");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	
	sub = num1 - num2;
	
	mult = num1 * num2;
	
	div = num1 / num2;

	printf("A soma do numero 1 + o numero 2 eh igual a: %f\n ", soma);
	
	printf("A subtracao do numero 1 - o numero 2 eh igual a: %f\n", sub);
	
	printf("A multiplicacao do numero 1 * o numero 2 eh igual a: %f\n", mult);
	
	printf("A divisao do numero 1 / o numero 2 eh igual a: %f\n", div);
	
}
