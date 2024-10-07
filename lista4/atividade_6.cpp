#include <stdio.h>

int main(){

    int ano;
    float chico = 1.50;
    float ze = 1.10;

    //chico ganha 2 cm por ano. Ou seja, em 1 ano, 1.52, em 2 anos, 1.54; etc...
    //ze ganha 3 cm por ano. Ou seja, em 1 ano, 1.13; em 2 anos, 1.16; etc...

    printf("Digite uma quantidade de anos: ");
    scanf("%i", &ano);

    for(int i = 0; i < ano; i++){
        
        chico += 0.02;
        ze += 0.03;

        printf("Chico tem %.2f Metros. Enquanto Ze tem %.2f Metros. \n", chico, ze);
    }

    if(chico > ze){
        printf("O Chico continua maior mesmo depois de %i anos.", ano);
    } else if(chico < ze)(
        printf("Simmm, o Ze passou o Chico em tamanho depois de %i anos.", ano)
    ); else {
        printf("Eles estao do mesmo tamanho passados %i anos.", ano);
    }

    return 0;
}