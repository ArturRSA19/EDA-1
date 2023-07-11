#include <stdio.h>

int main(){

    int Xm, Ym, Xt, Yt;

    scanf("%d %d %d %d", &Xm, &Ym, &Xt, &Yt);

    int dTotal = 0, dX = 0, dY = 0;

    if(Xm > Xt){
        dX = Xm - Xt;
    } else {
        dX = Xt - Xm;
    }
    
    if(Ym > Yt){
        dY = Ym - Yt;
    } else {
        dY = Yt - Ym;
    }

    dTotal = dX + dY;

    printf("%d\n", dTotal);
    
    return 0;

}