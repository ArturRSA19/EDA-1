#include <stdio.h>

int main(){

    int R, A, B, totalA, totalB, totalR;

    do{
        scanf("%d", &R);
        totalR++; //variável para armazenar a quantidade de vezes que o jogo aconteceu
        if(R == 0){
            break;
        } else {

            for(int i = 0; i<R; i++){ //For para ler os pontos da rodada "R"
                scanf("%d %d", &A, &B);
                totalA += A;
                totalB += B;
                
            }
        
            if(totalA > totalB){ //If para printar o vencedor da rodada
                printf("Teste %d\n", totalR);
                printf("Aldo\n");
                printf("\n");
            } else {
                printf("Teste %d\n", totalR);
                printf("Beto\n");
                printf("\n");
            }
        }

        //resetando os somadores de pontos:
        totalA = 0; 
        totalB = 0;
        
    } while(R!=0);

    return 0;

}