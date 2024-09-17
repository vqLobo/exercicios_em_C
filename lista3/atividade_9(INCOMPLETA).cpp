#include <stdio.h>
#include <stdlib.h>

//dois numeros inteiros, informar qual é maior, até os dois serem iguais.

int main(){
	
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%i", &num1);

    printf("Digite outro numero: ");
    scanf("%i", &num2);

    if (num1 == num2){
        printf("Sao iguais.");
    } else {
        printf("Digite outro numero: ");
        scanf("%i", num1);

        printf("Digite outro numero (num2): ");
        scanf("%i", num2);

        printf("%i, %i", num1, num2);
    }

    return 0;
}
