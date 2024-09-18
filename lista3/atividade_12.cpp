#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//contar quantos digitos tem um numero inteiro

int main(){
	
    int num1, digitos = 0; 

    printf("Digite um numero: ");
    scanf("%i", &num1);

    do{
        digitos = digitos + 1;
        num1 /= 10;

    } while (num1 != 0);

    printf("O numero tem %i digito(s)", digitos);

    return 0;
}
