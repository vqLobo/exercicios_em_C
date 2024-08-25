#include <stdio.h>
#include <stdlib.h>


int main(){

    int idade;
    char nomeCompleto[30];

    printf("Qual eh o seu nome completo? ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    printf("Qual sua idade? ");
    scanf("%i", &idade);

    printf("Ola %s, seja bem-vindo ao curso de Algoritmos e Programacao Estruturada. Voce tem %i anos de idade!", nomeCompleto, idade);

    return(0);
}