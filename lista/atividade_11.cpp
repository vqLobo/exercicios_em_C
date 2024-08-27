#include <stdio.h>
#include <stdlib.h>

// Média da Suavização Exponencial

int main(){

    //calculo = p = [(Ra * @) + (1-@) * Pa]
    // p = previsao ; Ra = consumo real do período anterior; @ = constante de suavização exponencial; Pa= previsão do período anterior

    float p, ra, a, pA;

    printf("Escolha a media inicial: ");
    scanf("%f", &ra);

    printf("Escolha o coeficiente de suavizacao exponencial: ");
    scanf("%f", &a);

    //a = 0.15;

    pA= 0;

    p1 = (ra * a) + (1 - a) * pA;

    //n faço ideia de como faz isso kkkkkkkkkkk 


    printf("%.2f", p);

    return(0);
}