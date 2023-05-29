#include <stdio.h>
#include <string.h>

#define T 1001

void reverterString(char* str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        // Troca os caracteres
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Incrementa o início e decrementa o fim
        inicio++;
        fim--;
    }
}

int main() {
    char X[T];

    fgets(X, sizeof(X), stdin);

    X[strcspn(X, "\n")] = '\0';

    reverterString(X);

    printf("%s\n", X);

    return 0;
}
