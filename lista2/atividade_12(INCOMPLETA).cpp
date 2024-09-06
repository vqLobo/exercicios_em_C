#include <stdio.h>
#include <stdlib.h>


int main(){
	
    float salario, salarioFinal, boni, aux;

    printf("Informe seu salario: ");
    scanf("%f", salario);

    if (salario <= 500){
        salarioFinal = salario;
        printf("Seu salario atual eh: %.2f", salarioFinal);
    }

	return 0;
}
