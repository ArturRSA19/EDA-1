#include <stdio.h>

#define T 1001

int main(){

    char string[T], stringInversa[T];
    int i, j, fim;

    fgets(string, T, stdin);

    fim = 0;
    while(string[fim] != '\0' && string[fim] != '\n'){
        fim++;
    }

    i = fim - 1;
    j=0;

    while(j<fim){
        stringInversa[j] = string[i];
        i--;
        j++;
    }

    stringInversa[fim] = '\0';

    printf("%s\n", stringInversa);

    return 0;
}
