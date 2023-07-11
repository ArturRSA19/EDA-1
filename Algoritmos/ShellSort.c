#include <stdio.h>
#include <stdlib.h>

typedef int Item;

#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {Item t = A; A = B; B = t;}
#define cmpexch(A, B) {if(less(B, A)) exch(A, B);}

void shell_sort(Item *v, int l, int r){
    int h = 1;
    while(h < (r-l)/9) h = 3*h + 1;
    while(h >= 1){
        for(int i = l+h; i<=r; i++){
            int j = i;
            Item tmp = v[j];
            while(j>=l+h && less(tmp, v[j-h])){
                v[j] = v[j-h];
                j -= h;
            }
            v[j] = tmp;
        }
        h = h/3;
    }
}
int main(void){
    Item vetor[5] = {10, 30, 20, 40, 15};

    shell_sort(vetor, 0, 4);
    for(int i = 0; i<5; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}