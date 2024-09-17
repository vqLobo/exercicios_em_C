#include <stdio.h>
#include <stdlib.h>

//dois numeros inteiros, informar qual é maior, até os dois serem iguais.

int main(){
	
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%i", &num1);

    printf("Digite outro numero: ");
    scanf("%i", &num2);
    
    if(num1 < num2){
            printf("%i eh menor que %i \n", num1, num2);
        } else if (num2 < num1){
            printf("%i eh menor que %i \n", num2, num1);
    }
    
    while(num1 != num2){
        
        printf("Digite outro numero: ");
        scanf("%i", &num1);
        
        printf("Digite outro numero: ");
        scanf("%i", &num2);
        
        if(num1 < num2){
            printf("%i eh menor que %i \n", num1, num2);
        } else if (num2 < num1){
            printf("%i eh menor que %i \n", num2, num1);
    }
    }
    
    printf("São iguais");
    
    return 0;
}
