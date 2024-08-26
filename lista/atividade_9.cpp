#include <stdio.h>
#include <stdlib.h>

//calcular preço da gasolina

int main(){

    const float combustivel = 5.79;
    
    float litros, valor;

    printf("Quantos litros de combustivel deseja colocar? ");
    scanf("%f", &litros);

    valor = litros * combustivel;

    printf("Valor a pagar: R$%.2f", valor);

    return(0);
}