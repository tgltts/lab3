#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteio(int intervalo){
   srand(time(NULL));
  intervalo = 1 + rand()%100;
  printf("Número escolhido, tente advinhar o número...\n");

void palpites(int palpite){
  do{
      do{
  
            printf("Seu palpite: ");
            scanf("%d", &palpite);

            if ( palpite < 1 || palpite > 100){
            printf("Valor inválido, digite novamente!\n");
            }

      }while (palpite < 1 || palpite > 100);

  }

int main(){

  sorteio(int intervalo)
  palpites(palpite)

   if (palpite == intervalo) {
      printf("Parabéns!!! Você acertou em %d tentativas\n",tentativas);
      }
            
      else if ( palpite < intervalo) {
        printf("Você chutou muito baixo! Tente novamente.\n");
      }

     else {
        printf("Você chutou muito alto! Tente novamente.\n");
      }
  return 0:
}
  

  
