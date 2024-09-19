#include <stdio.h>
#include <stdlib.h>

//senha numerica, 5 tentaticas para acertar

int main(){
  int senha, qntChances = 5, tentativa;

  printf("Digite uma senha (numerica): ");
  scanf("%i", &senha);

  while(qntChances != 0){
    printf("Digite a senha: ");
    scanf("%i", &tentativa);
      if (tentativa != senha){
          printf("Senha incorreta. ");
      } else if (tentativa = senha){
          printf("Senha Correta.");
          break;
      }
    qntChances --;
}
return 0;
}
