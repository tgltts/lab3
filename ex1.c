#include <stdio.h>
#include <stdlib.h>

void media_frequencia(float media, int freq){
  if (freq < 75){
      printf(" REPROVADO por Baixa frequência");
  }else if ( freq >= 75 && media >= 7.5){
            printf("APROVADO.");
  }else{
      printf(" DE EXAME."); 
  }
}

int main(){
  float media;
  int freq;

  printf("Digite sua media: ");
    scanf("%f", &media);

    printf("Digite sua frequencia: ");
    scanf("%d", &freq);

    media_frequencia(media, freq);

    return 0;
}


