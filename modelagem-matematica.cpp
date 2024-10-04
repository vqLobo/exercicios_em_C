#include <stdio.h>

int main()
{
    
    int escolha, infinito;
    float tamanho_local, tamanho_local2, calculo_tamanho, calculo_tamanho_pessoas, calculo, pessoas;
    
    infinito = 0;
    
    
    while (infinito == 0){
    printf("\nO que voce quer descobrir?\n");
    printf("\n1 - Calcular um numero de pessoas em um lugar.\n");
    printf("2 - Saber o minimo, médio e máximo de pessoas que cabem em uma area x.\n");
    printf("3 - Saber quantas pessoas por metro quadrado estão em uma área x.\n");
    printf("4 - Encerrar código.\n");
    printf("\nInsira:");
    scanf("%d", &escolha);
    
   
    
    if (escolha == 1){
        printf("\nAgora, insira o comprimento e a largura desse lugar em metros, respectivamente:\n");
        scanf("%f", &tamanho_local);
        scanf("%f", &tamanho_local2);
        
        printf("\nInsira a quantidade de pessoas por metro quadrado (máximo 9):");
        scanf("%f", &pessoas);
        
        calculo_tamanho = tamanho_local * tamanho_local2;
        calculo_tamanho_pessoas = calculo_tamanho * pessoas;
        
        printf("\nEm um espaco de %2.fm² tem %2.f pessoas.", calculo_tamanho, calculo_tamanho_pessoas);
        
    } else if (escolha == 2){
        printf("\nAgora, insira o comprimento e a largura desse lugar em metros, respectivamente:\n");
        scanf("%f", &tamanho_local);
        scanf("%f", &tamanho_local2);
        
        calculo_tamanho = tamanho_local * tamanho_local2;
        
        printf("\nO tamanhho do local é %0.1fm²", calculo_tamanho);
        printf("\nQuantidade de pessoas, levando em conta uma pessoa por metro quadrado:%0.1f \n", calculo_tamanho * 1);
        printf("Quantidade de pessoas, levando em conta tres pessoa por metro quadrado:%0.1f \n", calculo_tamanho * 3);
        printf("Quantidade de pessoas, levando em conta nove pessoa por metro quadrado:%0.1f \n",calculo_tamanho * 9);
        
    }else if (escolha == 3){
        printf("\nPara descobrir qual o número de pessoas por metro quadrado, insira o comprimento e a largura desse lugar em metros, respectivamente:");
        scanf("%f", &tamanho_local);
        scanf("%f", &tamanho_local2);
        
        calculo_tamanho = tamanho_local * tamanho_local2;
        
        printf("\nAgora, insira o número total de pessoas neste local");
        scanf("%f", &pessoas);
        
        calculo = (pessoas/calculo_tamanho);
        
        printf("\nEm uma area de %0.1fm², com um numero de %0.1f total de pessoas, o numero de pessoas por metro quadrado eh de %0.1f\n.", calculo_tamanho, pessoas, calculo);
        
        
        
        
        
    }else if (escolha == 4){
        break;
    }else{
        printf("Input incorreto.");
    }
    
    }
    
    

    return 0;
}
