#include <stdio.h>
#include <stdlib.h>

//idades diferentes ate o usuario digitar 0. Informar quantos sao menores de idades e quantos sao maiores de idade.

int main(){
	
    int idade, qntPessoas = 0, menorDeIdade, maiorDeIdade;
    
    printf("Digite uma idade: ");
    scanf("%i", &idade);
    
    while(idade != 0){
        printf("Digite uma idade: ");
        scanf("%i", &idade);
        
        qntPessoas ++;
        
        if(idade >= 18){
            maiorDeIdade ++;
        } else if(idade <= 17){
            menorDeIdade ++;
        }
    }
    
    
    printf("%i pessoas sao maiores de idade. %i sao menores de idade", maiorDeIdade, menorDeIdade);
    
    return 0;
}
