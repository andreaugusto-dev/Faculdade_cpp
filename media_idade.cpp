#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    float media;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        soma += idade;
    }
    media = soma / 10.0;
    printf("\nA media das 10 idades e: %.2f anos\n", media);

}
