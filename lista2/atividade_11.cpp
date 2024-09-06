#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int cod;
    float salario;

    printf("Digite seu codigo de funcionario: ");
    scanf("%d", &cod);

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    switch (cod){
        case 1:
            printf("Voce eh escrituario e recebe %f por mes. \n", salario);
            salario = salario + (salario * 0.50);
            printf("Seu novo salario, apos um aumento de 50 por cento eh igual a: %.2f", salario);
        break;

        case 2:
            printf("Voce eh secretario e recebe %f por mes. \n", salario);
            salario = salario + (salario * 0.35);
            printf("Seu novo salario, apos um aumento de 35 por cento eh igual a: %.2f", salario);
        break;

        case 3:
            printf("Voce eh caixa e recebe %f por mes \n", salario);
            salario = salario + (salario * 0.20);
            printf("Seu novo salario, apos um aumento de 20 por cento eh igual a: %.2f", salario);
        break;

        case 4:
            printf("Voce eh gerente e recebe %f por mes \n", salario);
            salario = salario + (salario * 0.10);
            printf("Seu novo salario, apos um aumento de 20 por cento eh igual a: %.2f", salario);
        break;
        
        case 5:
            printf("Voce eh direto e recebe %.2f por mes \n", salario);
            printf("Tem vergonha de pedir aumento nao? eu em, tem aumento pra vc nao.");
        break;
    }

	return 0;
}
