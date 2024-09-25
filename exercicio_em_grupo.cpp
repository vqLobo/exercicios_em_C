#include <stdio.h>
#include <stdlib.h>

//ordem crescente ou decrescente

int main(){

    int escolha, num1, num2;

    printf("Digite quantos numeros vc quer que a sequencia tenha: ");
    scanf("%i", &escolha);

    while(escolha != 0){

        printf("Digite um numero:");
        scanf("%i", &num1);

        printf("Digite outro numero:");
        scanf("%i", &num2);

        if(num1 < num2){
            printf("A ordem eh crescente. \n");
        } else if (num2 < num1){
            printf("A ordem eh decrescente. \n");
        } else {
            printf("Sao iguais.");
        }

        escolha --;
    }

return 0;
}
