#include <stdio.h>

int main(){

    int matriz[3][4] = {{ 1, 2, 3, 4},
                        { 5, 6, 7, 8},
                        { 9, 10, 11, 12}};
    int vetor[3] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            vetor[i] += matriz[i][j];
        }
    }

    printf("Soma das linhas: ");
    for(int i = 0; i < 3; i++){
        printf("%d ", vetor[i]);
    }

    printf("Matriz depois da multiplicacao:\n ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            matriz[i][j] *= vetor[i];
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}