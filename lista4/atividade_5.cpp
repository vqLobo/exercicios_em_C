#include <stdio.h>
#include <stdlib.h>

int main(){

    int escolha;
    int numeros;
    int minimo, maximo;

    printf("Digite quantos numeros deseja inserir: ");
    scanf("%i", &escolha);

    printf("Digite %i numeros inteiros: \n", escolha);
    for(int i = 0; i < escolha; i++){
        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros);       

        if (numeros % 2 == 0){
            printf("Numero par encontrado: %i", numeros);
            break;
        }
        
    }

    if(numeros % 2 != 0){
        printf("Nenhum numero par foi encontrado. \n");    
    }
    return 0;
}