#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//menu de restaurante

int main(){

    int escolha, acompanhamento;

    printf("Bem vindo ao restaurante. \n Nos temos a disponibilidade de 3 pratos principais e um acompanhamento. \n Escolha um prato principal: \n (1) - Prato 1 \n (2) - Prato 2 \n (3) - Prato 3 \n (4) - Sair \n");
        scanf("%i", &escolha);

    do {

        switch(escolha){
            case 1:
                printf("Voce escolheu o Prato 1 como seu prato principal. Escolha agora um dos 3 acompanhamentos possiveis: \n (1) - Acompanhamento 1 \n (2) - Acompanhamento 2 \n (3) - Acompanhamento 3 \n (4) - Voltar \n");
                scanf("%i", &acompanhamento);
                    switch(acompanhamento){
                        case 1:
                            printf("Voce escolheu o Prato 1 como prato principal e o Acompanhamento 1 como seu acompanhamento.");
                            printf("Se quiser voltar, digite 4. ");
                            scanf("%i", acompanhamento);
                            break;
                        case 2: 
                            printf("Voce escolheu o Prato 1 como prato principal e o Acompanhamento 2 como seu acompanhamento.");
                            printf("Se quiser voltar, digite 4. ");
                            scanf("%i", acompanhamento);
                            break;
                        case 3:
                            printf("Voce escolheu o Prato 1 como prato principal e o Acompanhamento 3 como seu acompanhamento.");
                            printf("Se quiser voltar, digite 4. ");
                            scanf("%i", acompanhamento);
                            break;
                        default:
                            printf("Nao eh uma escolha possivel");
                        break;
                    }
            case 2:
                printf("Voce escolheu o Prato 2 como seu prato principal. Escolha agora um dos 3 acompanhamentos possiveis: \n (1) - Acompanhamento 1 \n (2) - Acompanhamento 2 \n (3) - Acompanhamento 3 \n (4) - Voltar \n");
                scanf("%i", &acompanhamento);
                    switch(acompanhamento){
                        case 1:
                            printf("Voce escolheu o Prato 2 como prato principal e o Acompanhamento 1 como seu acompanhamento.");
                            printf("Se quiser voltar, digite 4. ");
                            scanf("%i", acompanhamento);
                            break;
                        case 2: 
                            printf("Voce escolheu o Prato 2 como prato principal e o Acompanhamento 2 como seu acompanhamento.");
                            printf("Se quiser voltar, digite 4. ");
                            scanf("%i", acompanhamento);
                            break;
                        case 3:
                            printf("Voce escolheu o Prato 2 como prato principal e o Acompanhamento 3 como seu acompanhamento.");
                            printf("Se quiser voltar, digite 4. ");
                            scanf("%i", acompanhamento);
                            break;
                        default:
                            printf("Nao eh uma escolha possivel");
                        break;
                    }
            case 3:
                printf("Voce escolheu o Prato 3 como seu prato principal. Escolha agora um dos 3 acompanhamentos possiveis: \n (1) - Acompanhamento 1 \n (2) - Acompanhamento 2 \n (3) - Acompanhamento 3 \n (4) - Voltar \n");
                scanf("%i", &acompanhamento);
                    switch(acompanhamento){
                        case 1:
                            printf("Voce escolheu o Prato 3 como prato principal e o Acompanhamento 1 como seu acompanhamento.");
                            printf("Se quiser voltar, digite 4. ");
                            scanf("%i", acompanhamento);
                            break;
                        case 2: 
                            printf("Voce escolheu o Prato 3 como prato principal e o Acompanhamento 2 como seu acompanhamento.");
                            printf("Se quiser voltar, digite 4. ");
                            scanf("%i", acompanhamento);
                            break;
                        case 3:
                            printf("Voce escolheu o Prato 3 como prato principal e o Acompanhamento 3 como seu acompanhamento.");
                            printf("Se quiser voltar, digite 4. ");
                            scanf("%i", acompanhamento);
                            break;
                        default:
                            printf("Nao eh uma escolha possivel");
                        break;
                    }
            default:
                printf("nao eh um numero possivel.");
        }
    } while (escolha != 4);
return 0;
}
