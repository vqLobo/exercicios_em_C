#include <stdio.h>
#include <stdlib.h>

// M�dia da Suaviza��o Exponencial

int main(){

    //calculo = p = [(Ra * @) + (1-@) * Pa]
    // p = previsao ; Ra = consumo real do per�odo anterior; @ = constante de suaviza��o exponencial; Pa= previs�o do per�odo anterior

    float p, a, p1, p2, p3, x, y, z;

    printf("Escolha a media inicial: ");
    scanf("%f", &p1);
    
    printf("Diga qual eh a segunda observacao: ");
    scanf("%f", &x);
    
    printf("Diga qual eh a terceira observacao: ");
    scanf("%f", &y);
    
    printf("Diga qual eh a quarta observacao: ");
    scanf("%f", &z);
    

    printf("Escolha o coeficiente de suavizacao exponencial: ");
    scanf("%f", &a);

    //a = 0.15;
    

	p2 = a * x + (1-a) * p1;
	
	printf("A media de EWMA (1) eh: %.2f\n", p2);

    //n fa�o ideia de como faz isso kkkkkkkkkkk 
    
    //p = esse calculo s� que sobre o pr�prio P, logo preciso de outra vari�vel.

	p3 = a * y + (1-a) * p2;
	
	printf("A media de EWMA (2) eh: %.2f\n", p3);
	
	//mesma coisa s� que pela terceira e ultima vez
	
	p = a * z + (1-a) * p3;
	
	printf("A media de EWMA (3) eh: %.2f", p);

    return(0);
}
