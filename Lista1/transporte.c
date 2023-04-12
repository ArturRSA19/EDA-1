#include <stdio.h>

int main(){

    int A, B, C; //dimensões dos conteineres
    int X, Y, Z; //dimensões do navio

    scanf("%d %d %d", &A, &B, &C);

    scanf("%d %d %d", &X, &Y, &Z);

    if(C > Z){
        printf("0\n");
    } else {
        printf("%d\n", ( (X/A) * (Y/B) * (Z/C) ) );
    }

    return 0;
}