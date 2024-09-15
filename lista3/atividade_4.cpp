#include <stdio.h>
#include <stdlib.h>

//converter dinheiro

int main(){
	
    float real, dolar, euro, peso;
    int conversao;

    printf("Quantos reais voce quer converter? ");
    scanf("%f", &real);

    printf("Para qual moeda gostaria de converter? \n (1 = Dolar) \n (2 = Euro) \n (3 = Peso) \n");
    scanf("%i", &conversao);

    switch (conversao){
        case 1:
            dolar = real / 5.57;
            printf("%.2f reais convertidos para dolar equivale a %.2f.", real, dolar);
        break;
            
        case 2:
            euro = real / 6.17;
            printf("%.2f reais convertidos para euros equivale a %.2f.", real, euro);
        break;

        case 3:
            peso = real * 172.35;
            printf("%.2f reais convetidos para pesos (argentinos) equivale a %.2f.", real, peso);
        break;

        default:
            printf("Valor invalido");
    }
    
	return 0;
}
