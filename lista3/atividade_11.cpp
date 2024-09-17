#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//jogo de azar kkkkk (adivinhar o numero);

int main(){
	
    srand (time(NULL));
    
    int r = rand();
    
    r = ((r != 0) && (r <= 10));
    
    printf("%i", r);
    
    
    return 0;
}
