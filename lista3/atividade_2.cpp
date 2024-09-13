#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int num, num2, num3;
	
	
	printf("Digite um numero: ");
	scanf("%i", &num2);
	
	num = 1;
	
	while (num <= 10){
		num3 = num * num2;
		num ++;
		printf("%i vezes %i = %i \n", num-1, num2, num3); 		
	}
	
	return 0;
}
