#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    float media;
    int total_pessoas = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d (ou 0 para sair): ", i);
        scanf("%d", &idade);

        if (idade == 0) {
            break; 
        }

        soma += idade;
        total_pessoas++;
    }

    if (total_pessoas > 0) {
        media = (float)soma / total_pessoas;
        printf("\nA media das %d idades e: %.2f anos\n", total_pessoas, media);
    } else {
        printf("\nNenhuma idade foi inserida.\n");
    }

    return 0;
}
