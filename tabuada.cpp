#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int numero, i, resposta;

    printf("Digite o numero que voce deseja saber a tabuada: ");
    scanf("%d", &numero);

    printf("\n--- TABUADA DO %d ---\n", numero);

    for (i = 1; i <= 10; i++) {
        resposta = numero * i;
        printf("[%d] * [%d] = [%d]\n", numero, i, resposta);
    }
}
