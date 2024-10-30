#include <stdio.h>

float media(float a, float b, float c, char letra){
    switch(letra){
        case 'a':
        case 'A':{
            float mediaA = (a + b + c)/3;
            return mediaA;
            break;
        }

        case 'p':
        case 'P':{
            float mediaB = ((a*5)+(b*3)+(c*2))/(5+3+2);
            return mediaB;
        break;
        }
    }
}

int main(){

    float nota1, nota2, nota3;

    printf("Digite as notas (3 notas): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    char letra;

    printf("Digite a letra A para media aritimetica, e P para ponderada. ");
    scanf(" %c", &letra);

    float resultado = media(nota1, nota2, nota3, letra);

    printf("Resultado: %.2f", resultado);

    return 0;
}