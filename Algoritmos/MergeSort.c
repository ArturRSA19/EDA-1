#include <stdio.h>
#include <stdlib.h>

typedef int Item;

#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {Item t = A; A = B; B = t;}
#define cmpexch(A, B) {if(less(B, A)) exch(A, B);}

void merge(Item *v, int l, int r1, int r2){
    Item *c = malloc(sizeof(Item) * (r2-l+1));
    int k = 0, i = l, j = r1+1;
    while(i<=r1 && j<=r2){
        if(less(v[i], v[j]))
            c[k++] = v[i++];
        else
            c[k++] = v[j++];
    }
    while(i<=r1)
        c[k++] = v[i++];
    while(j<=r2)
        c[k++] = v[j++];
    k = 0;
    for(i = l; i<=r2; i++)
        v[i] = c[k++];
    free(c);
}

void merge_sort(Item *v, int l, int r){
    if(l>=r) return;
    int meio = (l+r)/2;
    merge_sort(v, l, meio);
    merge_sort(v, meio+1, r);
    merge(v, l, meio, r);
}

int main(void){
    Item vetor[8] = {50, 30, 10, 20, 40, 15, 70, 60};

    merge_sort(vetor, 0, 7);
    for(int i = 0; i<8; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}