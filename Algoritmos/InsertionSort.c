#include <stdio.h>
#include <stdlib.h>

typedef int Item;

#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {Item t = A; A = B; B = t;}
#define cmpexch(A, B) {if(less(B, A)) exch(A, B);}

void insertion_sort(Item *v, int l, int r){
    for(int i = r; i>l; i--){
        cmpexch(v[i-1], v[i]);
    }
    for(int i = l+2; i<=r; i++){
        int j = i;
        Item tmp = v[j];
        while(less(tmp, v[j-1])){
            v[j] = v[j-1];
            j--;
        }
        v[j] = tmp;
    }
}

int main(void){
    Item vetor[5] = {10, 30, 20, 40, 15};

    insertion_sort(vetor, 0, 4);
    for(int i = 0; i<5; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}