#include <stdio.h>
#include <stdlib.h>

typedef int Item;

#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {Item t = A; A = B; B = t;}
#define cmpexch(A, B) {if(less(B, A)) exch(A, B);}

void selection_sort(Item *v, int l, int r){
    for(int i = l; i<r; i++){
        int min = i;
        for(int j = i+1; j<=r; j++){
            if(less(v[j], v[min]))
                min = j;
        }
        exch(v[i], v[min]);
    }
}

int main(void){
    Item vetor[6] = {30, 45, 60, 10, 5, 92};

    selection_sort(vetor, 0, 5);
    for(int i = 0; i<=5; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}