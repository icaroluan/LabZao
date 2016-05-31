#include <stdio.h>
#define MAX_A 101

int main(){

	int A, V, X, Y, i, j, aux[MAX_A], teste = 1, maiorVoos;

	scanf("%d %d", &A, &V);

	while(A != 0 && V != 0){

		//Zerando o vetor resultado
		for(i = 0; i < MAX_A; i++)
			aux[i] = 0;
		
		//Lendo os voos e armazenando
		for(i = 0; i < V; i++){
			scanf("%d %d", &X, &Y);
			aux[X] += 1; 
			aux[Y] += 1;
		}
		
		//pegando o maior numero de voos
		maiorVoos = 0;
		for(i = 1; i < MAX_A; i++)
			if(aux[i] >= maiorVoos)
				maiorVoos = aux[i];

		printf("Teste %d\n", teste++);
		for(i = 1; i < MAX_A; i++)
			if(aux[i] == maiorVoos)
				printf("%d ", i);

		printf("\n");
		
		scanf("%d %d", &A, &V);
	}

	return 0;
}
