#include <stdio.h>
#include <stdlib.h>

int main(){

    int p1, p2, p3;
    float notaTrabalho, notaAvalia, notaExame, media;

    p1 = 2;
    p2 = 3;
    p3 = 5;

    printf("Nota do Trabalho de laboratorio: ");
    scanf("%f", &notaTrabalho);

    printf("Nota da Avaliacao semestral: ");
    scanf("%f", &notaAvalia);

    printf("Exame Final: ");
    scanf("%f", &notaExame);

    media = ((notaTrabalho * p1) + (notaAvalia * p2) + (notaExame * p3)) / (p1 +p2 + p3);

    printf("Sua media final eh: %.2f \n", media);

    if (media >= 8){
        printf("Parabens, recebeu um A.");
    } else if (media >= 7){
        printf("Continue assim, recebeu um B");
    } else if (media >= 6){
        printf("O conhecimento é uma constante melhora, recebeu um C.");
    } else if (media >= 5){
        printf("Quanto mais se dedicar, menos notas assim voce vai ter. Recebeu um D.");
    } else {
        printf("O que aconteceu? Recebeu um E.");
    }

    return 0;
}
