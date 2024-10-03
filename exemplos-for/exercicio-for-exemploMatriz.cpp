#include <stdio.h>

int main (){
	
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	for(int i = n; i > 0; i--){
		for(int j = i; j >0; j--){
			printf(" %i ", j);
		}
		printf("\n");
	}
	
	return 0;
}
