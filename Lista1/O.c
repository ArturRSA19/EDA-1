#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int vetor[N];
    int numeros_pares[N];
    int numeros_impares[N];
    int i, j, k;
    int contador_pares = 0;
    int contador_impares = 0;

    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    // Separando os números pares e ímpares
    for (i = 0; i < N; i++) {
        if (vetor[i] % 2 == 0) {
            numeros_pares[contador_pares] = vetor[i];
            contador_pares++;
        } else {
            numeros_impares[contador_impares] = vetor[i];
            contador_impares++;
        }
    }

    // Imprimindo os números pares
    for (j = 0; j < contador_pares; j++) {
        printf("%d ", numeros_pares[j]);
    }

    printf("\n");

    // Imprimindo os números ímpares
    for (k = 0; k < contador_impares; k++) {
        printf("%d ", numeros_impares[k]);
    }
    printf("\n");

    return 0;
}