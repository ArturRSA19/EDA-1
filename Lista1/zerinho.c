#include <stdio.h>

int main(){

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if(A != B && B == C){
        printf("A\n");
    } else if(B != A && A == C){
        printf("B\n");
    } else if(C != A && A == B){
        printf("C\n");
    } else {
        printf("empate\n");
    }

    return 0;

}