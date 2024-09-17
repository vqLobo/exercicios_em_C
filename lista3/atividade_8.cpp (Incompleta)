#include <stdio.h>
#include <stdlib.h>

//soma ate o usuario digitar negativo

int main(){
	
    int num, acumuladorPar = 0, acumuladorImpar = 0, somaPar, somaImpar, diferenciadorPar, diferenciadorImpar;

    printf("Digite um numero: ");
    scanf("%i", &num);

    diferenciadorPar = num;
    diferenciadorImpar = num;

    while ((num > 0) && (num != 0)){
        printf("Digite outro numero: ");
        scanf("%i", &num);

        acumuladorImpar += num;
        acumuladorPar += num;

    }

    somaPar = diferenciadorPar + acumuladorPar;
    somaImpar = diferenciadorImpar + acumuladorImpar;

    printf("Os numeros pares ate %i, sao: \n", somaPar);

    while (somaPar >= 0){
            if (somaPar % 2 == 0){
                printf("%i \n", somaPar);
            } 
        somaPar --;
    }

    printf("Os numeros impares ate %i, sao: \n", somaImpar);

    while (somaImpar >= 0){
        if(somaImpar % 2 != 0){
            printf("%i \n", somaImpar);
        }
        somaImpar --;
    }

    return 0;
}
