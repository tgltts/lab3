#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteio(int *intervalo) {
    srand(time(NULL));  
    *intervalo = 1 + rand() % 100;  // Sorteia um número entre 1 e 100
}

void palpites(int intervalo) {
    int palpite, tentativas = 0;
    
    do {
        printf("Seu palpite: ");
        scanf("%d", &palpite);
        
        
        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido, digite novamente!\n");
        } else {
            tentativas++;
            if (palpite == intervalo) {
                printf("Parabéns!!! Você acertou em %d tentativas.\n", tentativas);
                break;  
            }else if (tentativas >= 5){
                printf("Você alcancou o número máximo de tentativas");
                break
            } else if (palpite < intervalo) {
                printf("Você chutou muito baixo! Tente novamente.\n");
            } else {
                printf("Você chutou muito alto! Tente novamente.\n");
            }
        }
    } while (1); 
}

int main() {
    int intervalo;
    
    sorteio(&intervalo);  
    printf("Número escolhido, tente adivinhar o número...\n");
    
    palpites(intervalo);  
    
    return 0;
}
