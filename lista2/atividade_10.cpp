#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Somente para se ter ciencia da sua nota, ela eh: %.2f \n", media);

    if (media <= 2.99){
        printf("nem tenta fi, ja reprovou.");
    }else if (media <= 6.99){
        printf("vc ainda tem chance, faz um exame para recuperar.");
    } else {
        printf("gg ez, passou.");
    }

    return 0;
}
