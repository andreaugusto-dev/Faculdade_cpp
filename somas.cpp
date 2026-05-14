#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int numero;
    int soma_pares = 0;
    int soma_impares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            soma_pares += numero;
        }
        else {
            soma_impares += numero;
        }
    }

    printf("\nA soma dos numeros pares e: %d\n", soma_pares);
    printf("A soma dos numeros impares e: %d\n", soma_impares);

    return 0;
}
