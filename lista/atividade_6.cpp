#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float num, numQ;

    printf("Digite um numero: ");
    scanf("%f", &num);

    numQ = pow(num, 2);

    printf("O numero escolhido foi %f e o seu quadrado eh %f", num, numQ);

    return(0);
}

