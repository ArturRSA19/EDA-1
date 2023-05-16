#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int vetor[n];

    for(int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    int aux = 0; //Variável para guardar o índice do menor número

    for(int j=1; j<n; j++){
        if(vetor[j] < vetor[aux]){
            aux = j;
        }
    }

    printf("%d\n", aux);

    return 0;
}