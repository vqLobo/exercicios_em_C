#include <stdio.h>
#include <stdlib.h>

//soma ate o usuario digitar 0

int main(){
	
    int num1, acumulador = 0, diferenciador;

    printf("Digite um numero: ");
    scanf("%i", &num1);

    diferenciador = num1;
	
    while (num1 != 0){
        printf("Digite outro numero: ");
        scanf("%i", &num1);
	acumulador += num1;
    }

    printf("A soma de todos os numeros digitados (ate o usuario escrever 0) eh igual a %i", acumulador + diferenciador);
	
    return 0;
}
