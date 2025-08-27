#include <stdio.h>
#include <stdlib.h>

int main() {
    float media;
    int freq;

    // Validação de entrada
    do {
        printf("Digite a sua média (0 a 10): ");
        scanf("%f", &media);

        printf("Digite a sua frequência (0 a 100): ");
        scanf("%d", &freq);

        if (media < 0 || media > 10 || freq < 0 || freq > 100) {
            printf("Valores inválidos, digite novamente!\n\n");
        }

    } while (media < 0 || media > 10 || freq < 0 || freq > 100);

    // Regras de aprovação
    if (freq < 75) {
        printf("REPROVADO (frequência insuficiente)\n");
    }
    else if (freq >= 75 && media >= 7.5) {
        printf("APROVADO!\n");
    }
    else {
        printf("DE EXAME.\n");
    }

    return 0;
}
