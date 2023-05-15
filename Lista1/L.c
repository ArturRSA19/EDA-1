#include <stdio.h>
#include <string.h>

int main() {
    int m, teste = 1;

    while (1) {
        scanf("%d", &m);

        if (m == 0) {
            break;
        }

        int resultado, operando;
        char operador;

        scanf("%d", &resultado);

        for (int i = 1; i < m; i++) {
            scanf(" %c%d", &operador, &operando);

            if (operador == '+') {
                resultado += operando;
            } else {
                resultado -= operando;
            }
        }

        printf("Teste %d\n%d\n\n", teste, resultado);
        teste++;
    }

    return 0;
}