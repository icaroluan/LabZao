#include <stdio.h>
#include <stdlib.h>


#define MAX_NUM_PAISES 100

typedef struct{
	int id;
	int ouro;
	int prata;
	int bronze;
	int total;
} Medalhas;


Medalhas pais[MAX_NUM_PAISES + 1];

int main(){
	int i, j, N, M, O, P, B;
	Medalhas aux;

	scanf("%d %d", &N, &M);

	
	for(i = 1; i <= N; i++){
		pais[i].id = i;
		pais[i].ouro = 0;
		pais[i].prata = 0;
		pais[i].bronze = 0;
		pais[i].total=0;
	}

	for(i = 1; i <= M; i++){
		scanf("%d %d %d", &O, &P, &B);
		pais[O].ouro++;
		pais[P].prata++;
		pais[B].bronze++;
		pais[O].total++;
		pais[P].total++;
		pais[B].total++;
	}


	
	for(i = 2; i <= N; i++){
		for(j = i - 1, aux = pais[i];
			(j >= 1) && 
			(aux.total> pais[j].total) ||
			((aux.ouro>pais[j].ouro) &&
			((aux.total==pais[j].total) &&
			(aux.ouro==pais[j].ouro)) || 
			(aux.total==pais[j].total)) &&
			((aux.prata  > pais[j].prata) &&
			(aux.total==pais[j].total) &&
			(aux.ouro==pais[j].ouro && aux.total==pais[j].total) &&
			(aux.prata==pais[j].prata && aux.total==pais[j].total)) ||
			((aux.bronze > pais[j].bronze) 	  &&
				(aux.bronze==pais[j].bronze && aux.total==pais[j].total) &&
				(aux.ouro  == pais[j].ouro && aux.total==pais[j].total)   &&	
				(aux.prata == pais[j].prata && aux.total==pais[j].total)) 	|| 	
			((aux.id 	 < pais[j].id) 		  &&
				((aux.ouro   == pais[j].ouro)  && (aux.total == pais[j].total))	&&
				((aux.prata  == pais[j].prata) && (aux.total == pais[j].total))	&&
				((aux.bronze == pais[j].bronze) && (aux.total == pais[j].total))); j--){ 
		
			pais[j + 1] = pais[j];
		}
		pais[j + 1] = aux;
	}


	printf("%d", pais[1].id);
	for(i = 2; i <= N; i++){
		printf(" %d", pais[i].id);
	}
	printf("\n");

	return 0;
}
