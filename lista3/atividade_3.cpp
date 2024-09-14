#include <stdio.h>
#include <stdlib.h>

int main(){	
	
	float num, calculo, soma=0, media, i;
	
	printf("Digite quantos numeros deseja inserir para calcular uma media: ");
	scanf("%f", &num);
	
	while (i < num){
		printf("Insira um numero: ");
		scanf("%f", &calculo);
		soma += calculo; 
		i++;
	}
	
	media = soma / num;
	
	printf("A media desses numeros eh: %.2f", media);

	return 0;
}
