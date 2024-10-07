#include <stdio.h>

int main(){

    int termos, num = 0;
    int add = 0;

    printf("Digite a quantidade de termos: ");
    scanf("%i", &termos);

    for(int i = 0; i < termos; i++){
        add = add * 10 + 1;
        num += add;
        printf(" + %i", add);
    }

    printf("\nA soma dos termos eh igual a: %i", num);

    return 0;
}