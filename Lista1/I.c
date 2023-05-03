#include <stdio.h>
#include <stdbool.h>

int main (){

	int N, max;
	int i, S, E;
	short lotacaoAtual;
	bool ultrapassou = false;

	scanf("%d %d", &N, &max);

	lotacaoAtual = 0;
	for (i = 0; i < N; i++)
	{

		scanf("%d %d", &S, &E);

		lotacaoAtual += E - S;

		if (lotacaoAtual > max && ultrapassou == false)
			ultrapassou = true;

	}

	if (ultrapassou)
		printf("S\n");
	else
		printf("N\n");
    
    return 0;
}