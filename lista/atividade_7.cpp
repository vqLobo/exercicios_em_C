#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159

//calcular a circunferencia de um circulo 
// c(circunferencia) = 2 * pi * r

int main(){

    float c, r;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &r);

    c = 2 * pi * r;

    printf("A circunferencia do circulo eh: %.2f", c);

    return(0);
}