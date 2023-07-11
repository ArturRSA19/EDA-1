#include <stdio.h>
#include <stdlib.h>

typedef int Item;

#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {Item t = A; A = B; B = t;}
#define cmpexch(A, B) {if(less(B, A)) exch(A, B);}

void quick_sort(Item *v, int l, int r){
    if(r <= l) return;
    int i = l-1, j = r, p = l-1, q = r;
    Item c = v[r];
    while(1){
        while(less(v[++i], c));
        while(less(c, v[--j])) if(j == l) break;
        if(i >= j) break;
        exch(v[i], v[j]);
        if(v[i] == c) exch(v[++p], v[i]);
        if(v[j] == c) exch(v[--q], v[j]);
    }
    exch(v[i], v[r]);
    j = i-1;
    i = i+1;
    for(int k = l; k<=p; k++, j--) exch(v[k], v[j]);
    for(int k = r-1; k>=q; k--, i++) exch(v[k], v[i]);
    quick_sort(v, l, j);
    quick_sort(v, i, r);
}

int main(void){
    Item vetor[6] = {30, 45, 60, 10, 5, 92};

    quick_sort(vetor, 0, 5);
    for(int i = 0; i<=5; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}