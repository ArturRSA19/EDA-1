#include <stdio.h>

int main(){

    float a, g, rA, rG;

    scanf("%f %f %f %f", &a, &g, &rA, &rG);

    float auxA, auxG;

    auxA = rA/a;
    auxG = rG/g;

    if(auxA == auxG){
        printf("G");
    } else if(auxA > auxG){
        printf("A");
    } else {
        printf("G");
    }
    
    return 0;

}