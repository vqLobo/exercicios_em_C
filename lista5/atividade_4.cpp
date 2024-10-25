#include <stdio.h>

int main(){

    float matriz[4][4] = {{0.23, 1.45, 0.98, 5.29},
                          {5.45, 0.12, 15.32, 22.34},
                          {14.54, 0.10, 50.23, 3.33},
                          {13.45, 54.43, 17.37, 0.35}};
                          
    float min = matriz[0][0];
    int minLinha = 0, minColuna = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] < min){
                min = matriz[i][j];
                minLinha = i;
                minColuna = j;
            }
        }
    }

    float maxLinha = matriz[minLinha][0];

    for(int j = 1; j < 4; j++){
        if(matriz[minLinha][j] > maxLinha){
            maxLinha = matriz[minLinha][j];
        }
    }

    printf("Menor elemento: %.2f na posicao (%d, %d)\n", min, minLinha, minColuna);
    printf("MINMAX: %.2f\n", maxLinha);

    return 0;
}