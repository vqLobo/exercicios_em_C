#include <stdio.h>

int main(){

    int vetor1[3] = {5, 43, 12};
    int vetor2[3] = {53, 45, 77};
    int vetor3[6];
    int i, j, temp;

    for(i = 0; i < 3-1; i++){
        for(j = 0; j < 3 - i - 1; j++){
            if(vetor1[j] > vetor1[j+1]){
                temp = vetor1[j];
                vetor1[j] = vetor1[j+1];
                vetor1[j+1] = temp;
            }
        }
    }

    printf("Vetor 1 ordenado: ");
    for(i = 0; i < 3; i++){
        printf("%d ", vetor1[i]);
    }

    for(i = 0; i < 3-1; i++){
        for(j = 0; j < 3 - i - 1; j++){
            if(vetor2[j] > vetor2[j+1]){
                temp = vetor2[j];
                vetor2[j] = vetor2[j+1];
                vetor2[j+1] = temp;
            }
        }
    }

    printf("Vetor 2 ordenaodo: ");
    for(i = 0; i < 3; i++){
        printf("%d ", vetor2[i]);
    }

    for(i = 0; i < 3; i++){
        vetor3[i] = vetor1[i];
    }

    for(i = 0; i < 3; i++){
        vetor3[i+3] = vetor2[i];
    }

    printf("Vetor combinado: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", vetor3[i]);
    }

    return 0;
}