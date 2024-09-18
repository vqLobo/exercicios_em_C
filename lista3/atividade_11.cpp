#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//jogo de azar kkkkk (adivinhar o numero);

int main(){
	
    int numero_aleatorio, chute;

    const int limite = 10;

    srand(time(NULL));

    numero_aleatorio = rand() % (limite + 1);

    printf("Tente acertar um numero escolhido aleatoriamente pela maquina: (de 1 a 10)"); 

    do {
        scanf("%i", &chute);

        if(chute < 0 || chute > limite){
            printf("escolha outro numero (entre 1 e 10)");
        } else if (chute < numero_aleatorio){
            printf("O numero que vc digitou eh menor que o numero aleatorio. ");
        } else if (chute > numero_aleatorio){
            printf("O numero que vc digitou eh maior que o numero aleatorio. ");
        }

    }   while (chute != numero_aleatorio);

    printf("Parabens, conseguiu acertar o numero. Ele era %i", numero_aleatorio);

    return 0;
}
