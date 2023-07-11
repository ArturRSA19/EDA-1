#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int vetor[n];

    for(int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    int x;
    scanf("%d", &x);
    int tem = 0;

    for(int j = 0; j<n; j++){
        if(vetor[j] == x){
            tem++;
        } 
    }

    if(tem > 0){
        printf("pertence\n");
    } else {
        printf("nao pertence\n");
    }

    return 0;

}