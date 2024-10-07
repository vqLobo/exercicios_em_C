#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++){
        for (int j = 0; j < num - i; j++){
            printf(" ");
        } 
        for (int j = 0; j < i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}