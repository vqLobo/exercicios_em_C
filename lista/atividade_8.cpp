#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//calcular preço de conta eletrica

int main(){

    const float precoKWh = 0.50;
    float valorFinal, potencia, horas, kwh;
    int dias;

    //potencia * horas * dias /1000 = kwh ===> kwh * precoKWh

    printf("Qual a potencia do aparelho? (em W)");
    scanf("%f", &potencia);

    printf("Quantas horas ficou sendo utilizado?");
    scanf("%f", &horas);

    printf("Quantos dias foi utilizado?");
    scanf("%i", &dias);

    kwh = (potencia * horas * dias)/1000;
    
    valorFinal = kwh * precoKWh;

    printf("O valor da conta de energia eh: R$%.3f", valorFinal);

    return(0);
}

