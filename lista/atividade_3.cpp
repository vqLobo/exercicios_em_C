#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    
    float a, b, c;

    printf("Digite um numero para ser a base: ");
    scanf("%f", &a);

    printf("Digite um numero para ser o expoente: ");
    scanf("%f", &b);

    c = pow(a, b);

    printf("A potência é: %f", c);

    return(0);
}