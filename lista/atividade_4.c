#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    //frase = origem,  frase2 = destino
    char frase[20], frase2[20];

    printf("Digite uma frase: (string)\n");
    fgets(frase, sizeof(frase), stdin);

    //frase2 == frase;

    strcpy(frase2, frase);

    printf("A frase digitada foi: %s (copiada de outra string)", frase2);
    
    return(0);
}