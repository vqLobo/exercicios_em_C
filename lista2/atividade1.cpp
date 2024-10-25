#include <stdio.h>

int main(){

    int vetor1[5] = {0, 1, 2, 3, 4};
    int vetor2[5] = {10, 11, 12, 13, 14};

    int backupVetor1[5];

    for(int i = 0; i < 5; i++){
        printf("Vetor 1: %d\n", vetor1[i]);
    }
    
    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("Vetor 2: %d\n", vetor2[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        backupVetor1[i] = vetor1[i];
        vetor1[i] = vetor2[i];
        printf("Vetor 1 modificado: %d\n", vetor1[i]);
    }

    printf("\n");
    
    for(int i = 0; i < 5; i++){
        vetor2[i] = backupVetor1[i];
        printf("Vetor 2 modificado: %d\n", vetor2[i]);
    }

    return 0;
}
