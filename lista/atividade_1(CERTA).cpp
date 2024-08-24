#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float a, b, c, d, resultado ;
	
	printf("Digite um numero (A): ");
	scanf("%f", &a);
	
	printf("Digite um numero (B): ");
	scanf("%f", &b);
	
	printf("Digite um numero (C): ");
	scanf("%f", &c);
	
	//calculo = b^2 - 4ac
	
	d = pow(b, 2);
	
	
	resultado = d - (4 * a * c);
	
	printf("O resultado eh: %.1f", resultado);	
	
	return(0);
}
