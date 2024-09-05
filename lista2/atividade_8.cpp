#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario < 2001){
        printf("isento de imposto.");
    } else if(salario > 4000){
        printf("20 por cento de imposto pro governo.\n");
        salario = salario * 0.2;
        printf("O valor do imposto eh de: %.2f", salario);
    } else {
        printf("10 por cento de imposto pro governo. \n");
        salario = salario * 0.1;
        printf("O valor do imposto eh de: %.2f", salario);
    }

    return 0;
}
