#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    int vetor[N];

    for(int i = 0; i<N; i++){
        scanf("%d", &vetor[i]);
    }

    for(int j = 0; j<N; j++){
        if(vetor[j]%2 == 0){
            printf("%d ", j);
        }
    }

    printf("\n");

    for(int k = 0; k<N; k++){
        if(vetor[k]%2 != 0){
            printf("%d ", k);
        }
    }

    printf("\n");

    return 0;

}