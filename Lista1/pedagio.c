#include <stdio.h>

int main(){

    int L, D; //comprimento da estrada e distancia dos pedagios
    int K, P; //preço do km e do pedágio
    int q; // quantidade de pedagios

    int valorP; // variavel para calcular o preco a ser pago pelo pedagio
    int valorK; // variavel para calcular o preco a ser pago pelos km gastos na viagem
    int valorTotal; // variavel para calculo de valor total

    scanf("%d %d", &L,&D);
    scanf("%d %d", &K, &P);

    q = L/D;
    valorP = q * P;
    valorK = L * K;
    valorTotal = valorK + valorP;

    printf("%d\n", valorTotal);

    return 0;

}