#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float altura;
    float peso;
    float soma_alturas = 0.0;
    float media_alturas;
    int contador_peso_baixo = 0, porcentagem;

    for (int i = 1; i <= 5; i++) {
        printf("--- Pessoa %d ---\n", i);

        do {
            printf("Digite a altura (ex: 1.75 ou 175): ");
            scanf("%f", &altura);

            if (altura > 100) {
                altura = altura / 100;
            }

            if (altura <= 0 || altura > 3.0) {
                printf("Altura invalida! Tente novamente.\n");
            }

        } while (altura <= 0 || altura > 3.0);

        printf("Digite o peso (em kg): ");
        scanf("%f", &peso);

        soma_alturas += altura;

        if (peso < 40.0) {
            contador_peso_baixo++;
        }
        printf("\n");
    }

    media_alturas = soma_alturas / 10.0;
    porcentagem = (contador_peso_baixo * 100) / 5;

    printf("================ RESULTADOS ================\n");
    printf("A media das alturas e: %.2f metros\n", media_alturas);
    printf("Porcentagem de pessoas com menos de 40 kg: %.1d%s\n", porcentagem, "%");

    return 0;
}
