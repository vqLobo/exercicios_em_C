#include <stdio.h>

int main(){

    int ano;
    float salario = 1000;
    float aumento = 1.5;

    printf("Salario em 2018 = %.2f \n", salario);
    printf("Recebe %.2f%% de aumento sobre o salario atual. \n", aumento);

    salario += salario * (aumento/100);

    printf("Salario em 2019 = %.2f \n", salario);

    printf("Digite o ano atual: ");
    scanf("%i", &ano);

    for(int i = 2019; i < ano; i++){
        aumento *= 2;

        int ano1 = i;
    
        salario += salario * (aumento/100);

        printf("Ano: %i, teve um aumento de %.2f%, salario final = %.2f \n", ano1, aumento, salario);
    }

    return 0;
}