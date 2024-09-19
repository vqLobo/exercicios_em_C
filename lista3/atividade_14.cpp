#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//menu contendo: exibir mensagem, calcular quadrado de um numero e o cubo de um numero

int main(){

  int escolha, num, quadrado, cubo;

  printf("Bem vindo \n O Seguinte menu apresenta 3 opcoes. Sendo elas: \n (1) - Exibir mensagem. \n (2) - Calcular o quadrado de um numero. \n (3) - Calcular o cubo de um numero. \n O que gostaria de fazer? ");
  scanf("%i", &escolha);

  switch(escolha){
    case 1:
        printf("Ola, mensagem sendo exibida aqui agora.");
    break;

    case 2:
        printf("Digite um numero para calcular seu quadrado: ");
        scanf("%i", &num);
        quadrado = pow(num, 2);
        printf("O quadrado de %i eh %i", num, quadrado);
    break;

    case 3:
        printf("Digite um numero para calcular seu cubo: ");
        scanf("%i", &num);
        cubo = pow(num, 3);
        printf("O cubo de %i eh %i", num, cubo);
    break;

    default:
        printf("nao eh um numero possivel");
}
return 0;
}
