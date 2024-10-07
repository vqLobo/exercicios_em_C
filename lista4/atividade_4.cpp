#include <stdio.h>
#include <stdlib.h>

int main(){

    int escolha;
    int *numeros;
    int minimo, maximo;

    printf("Digite quantos numeros deseja inserir: \n");
    scanf("%i", &escolha);

    numeros = (int *)malloc(escolha * sizeof(int));

    printf("Digite %i numeros inteiros: \n", escolha);
    for(int i = 0; i < escolha; i++){
        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros[i]);        
    }

    maximo = numeros[0];
    minimo = numeros[0];

    for(int i = 1; i < escolha; i++){
        if(numeros[i] > maximo){
            maximo = numeros[i];
        }
        if(numeros[i] < minimo){
            minimo = numeros[i];
        }
    }

    printf("\nO maior numero eh: %i \n", maximo);
    printf("O menor numero eh: %i \n", minimo);

    return 0;
}