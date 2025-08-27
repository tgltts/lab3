#include <stdio.h>


void verificacao(int a,b,c){
  if (a < (b+c) || b < (c+a) || c < (a+b){
     printf("Este Triângulo existe");
    }
  else{
    printf("Este Triângulo não existe");
  }
}
int main(){
  int a;
  int b;
  int c;

  printf("Digite o tamanho do lado a: \n");
  scanf("%d", &a);
  
  printf("Digite o tamanho do lado b: \n");
  scanf("%d", &b);

  printf("Digite o tamanho do lado c: \n");
  scanf("%d", &c);

  verificacao(a,b,c)

  return 0;
}
  


  
  
