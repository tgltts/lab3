#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteio(int *intervalo) {
    srand(time(NULL));  // Inicializa a semente do gerador de números aleatórios
    *intervalo = 1 + rand() % 100;  // Sorteia um número entre 1 e 100
}

void palpites(int intervalo) {
    int palpite, tentativas = 0;
    
    do {
        printf("Seu palpite: ");
        scanf("%d", &palpite);
        
        // Valida se o palpite está dentro do intervalo permitido
        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido, digite novamente!\n");
        } else {
            tentativas++;
            if (palpite == intervalo) {
                printf("Parabéns!!! Você acertou em %d tentativas.\n", tentativas);
                break;  // Sai do loop quando o usuário acerta
            } else if (palpite < intervalo) {
                printf("Você chutou muito baixo! Tente novamente.\n");
            } else {
                printf("Você chutou muito alto! Tente novamente.\n");
            }
        }
    } while (1);  // Loop até acertar
}

int main() {
    int intervalo;
    
    sorteio(&intervalo);  // Chama a função sorteio e passa o endereço da variável 'intervalo'
    printf("Número escolhido, tente adivinhar o número...\n");
    
    palpites(intervalo);  // Chama a função de palpites com o número sorteado
    
    return 0;
}

  
