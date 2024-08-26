#include <stdio.h>
#include <stdlib.h>

//média ponderada
//valor1 * peso1 + valor2 * peso2 + valor3 * peso3 /peso1 + peso2 + peso3

int main(){

    float v1, v2, v3, p1, p2, p3, media;

    printf("Escolha um valor (V1): ");
    scanf("%f", &v1);
    printf("Escolha um peso para esse valor (V1): ");
    scanf("%f", &p1);

    printf("Escolha um valor (V2): ");
    scanf("%f", &v2);
    printf("Escolha um peso para esse valor (V2): ");
    scanf("%f", &p2);

    printf("Escolha um valor (V3): ");
    scanf("%f", &v3);
    printf("Escolha um peso para esse valor (V3): ");
    scanf("%f", &p3);

    

    media = (v1 * p1) + (v2 * p2) + (v3 * p3)/ p1 + p2 + p3;

    printf("Media ponderada eh: %.2f", media);

    return(0);
}