#include <stdio.h>
#include <stdlib.h>

//ordem crescente ou decrescente

int main(){

    int n1, n2, n3, botao_deligar;
    
    printf("Insira 3 numeros, o programa dirah se eles estao em ordem crescente ou decrescente. Caso queria encerrar o programa, eh so digitar 3 numeros iguais.\n");
    
    printf("Digite quantas vezes quer botar uma sequencia: ");
    scanf("%i", &botao_deligar);
    
    while (botao_deligar != 0){
    
        printf("\nInsira o primeiro numero:");
        scanf("%d", &n1);
        
        printf("Insira o segundo numero:");
        scanf("%d", &n2);
    
        printf("Insira o terceiro numero:");
        scanf("%d", &n3);
        
        if ((n1 > n2) && (n2 > n3)){
            printf("A ordem eh decrescente.");
        } else if ((n3 > n2) && (n2 > n1)){
            printf("A ordem eh crescente.");
        } else if ((n1 == n2) && (n2 == n3)){
            break;
        } else{
            printf("Nem crescente nem decrescente.");
        }
    
    	botao_deligar --;
    }
	     
	return 0;
}
