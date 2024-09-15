#include <stdio.h>
#include <stdlib.h>

//soma ate o usuario digitar 0

int main(){
	
    int num, soma, calculo;

    printf("Digite um numero: ");
    scanf("%i", &num);

    while (num != 0){
        printf("Digite outro numero: ");
        scanf("%i", &num);

        soma += num;
    }

    calculo = soma + num;

    printf("A soma de todos os numeros digitados (ate o usuario escrever 0) eh igual a %i", calculo);

	return 0;
}
