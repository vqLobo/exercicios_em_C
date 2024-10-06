#include <stdio.h>

int main() {
    int termos;
    int num1 = 1;
    int num2 = 4;

    printf("Digite a quantidade de termos que serão impressos (N): ");
    scanf("%i", &termos);


    for (int i = 1; i <= termos; i++) {
        if (i % 3 == 1) {
            printf("%i ", num1); 
            num1++; 
        } else if (i % 3 == 2 || i % 3 == 0) {
            printf("%i ", num2); 
            if (i % 3 == 0){
                num2 ++;
            }
        }
    }

    return 0;
}
