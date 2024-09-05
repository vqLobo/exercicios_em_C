#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float lado1, lado2, lado3;
	
	printf("Digite o lado de um triangulo: ");
	scanf("%f", &lado1);
	
	printf("Digite um outro lado: ");
	scanf("%f", &lado2);
	
	printf("Digite um terceiro lado: ");
	scanf("%f", &lado3);
	
	if (lado1 + lado2 > lado3){
		printf("eh valido\n");
	}else{
		printf("nao eh valido\n");
	}
	
	if ((lado1 == lado2 && lado2 == lado3)){
		printf("eh um triangulo equilatero");
	} else if((lado1 != lado2 && lado1 != lado3 && lado2 != lado3)){
		printf("eh um triangulo escaleno");
	} else if ((lado1 == lado2 && lado2 != lado3 && lado1 != lado3)){
		printf("eh um triangulo isosceles");		
	} 	
	return 0;
}
