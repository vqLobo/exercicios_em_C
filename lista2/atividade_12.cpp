#include <stdio.h>
#include <stdlib.h>


int main(){
	
    float salario, salarioFinal, boni, aux;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario <= 500){
    	boni = (salario + (salario * 0.05));
    	aux = 150;
        salarioFinal = salario + aux + boni;
        printf("Seu novo salario atual eh: %.2f", salarioFinal);
    } else if (salario <= 600){
    	boni = (salario + (salario * 0.12));
    	aux = 150;
    	salarioFinal = salario + aux + boni;
    	printf("Seu novo salario atual eh: %.2f", salarioFinal);
	} else if (salario <= 1200){
	boni = (salario + (salario * 0.12));
	aux = 100;
	salarioFinal = salario + aux + boni;
	printf("Seu novo salario atual eh: %.2f", salarioFinal);
	} else{
	aux = 100;
	salarioFinal = salario + aux;
	printf("Sem bonificacao, porem tem auxilio escola. Salario final eh: %.2f", salarioFinal);
	}
		
	

	return 0;
}
