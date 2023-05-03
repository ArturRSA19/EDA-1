#include <stdio.h>

int main(){

    int entradas, max;
    int S, E;
    int contador = 0;

    scanf("%d %d", &entradas, &max);

    int soma;

    for(int i = 0; i<entradas; i++){
        scanf("%d %d", &S, &E);
        soma = (S + E);
        if(soma >= max){
            contador++;
        }
        soma = 0;
    }

    if(contador>0){
            printf("S\n");
        } else {
            printf("N\n");
        }

    return 0;

}