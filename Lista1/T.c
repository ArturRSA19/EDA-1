#include <stdio.h>

#define MAX 1001

int main(){

    char x[MAX];
    int i = 0;

    fgets(x, sizeof(x), stdin);

    while(x[i] != '\0'){
        i++;
    }

    printf("%d\n", (i-1));

    return 0;
}