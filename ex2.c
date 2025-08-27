#include <stdio.h>


void verificacao(int a,int b, int c){
  if (a < (b+c) || b < (c+a) || c < (a+b)){
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

  printf("Digite o tamanho do lado a: ");
  scanf("%d", &a);
  
  printf("Digite o tamanho do lado b: ");
  scanf("%d", &b);

  printf("Digite o tamanho do lado c: ");
  scanf("%d", &c);

  verificacao(a,b,c);

  return 0;
}
  


  
  



  
  
