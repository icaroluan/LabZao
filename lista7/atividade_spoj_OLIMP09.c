#include <stdio.h>
#include <stdlib.h>

// Comenta a linha com o nome DEBUG para desativar o DEBUG
//#define DEBUG
#define MAX_NUM_PAISES 100

typedef struct{
	int ouro;
	int prata;
	int bronze;
	int id;
} Medalhas;

/* Iremos indexar do 1 ao 100, já que vetor em c vai de 0 a n - 1, adicionamos + 1 e conseguimos n */
Medalhas pais[MAX_NUM_PAISES + 1];

int main(){
	int i, j, N, M, O, P, B;
	Medalhas aux;

	scanf("%d %d", &N, &M);

	/* Inicializemos os paises com o id do país e a quantidade de medalhas*/
	for(i = 1; i <= N; i++){
		pais[i].id = i;
		pais[i].ouro = 0;
		pais[i].prata = 0;
		pais[i].bronze = 0;
	}

	for(i = 1; i <= M; i++){
		scanf("%d %d %d", &O, &P, &B);

		/* Cada pais recebe uma medalha por modalidade logo Pais[m].medalha++ */ 
		pais[O].ouro++;
		pais[P].prata++;
		pais[B].bronze++;
	}

	#ifdef DEBUG
	for(i = 1; i <= N; i++){
		printf("PAIS %d | OURO %d | PRATA %d | BRONZE %d\n", 	pais[i].id,
																pais[i].ouro,
																pais[i].prata,
																pais[i].bronze);
	}
	#endif

	/* Agora que temos a pontuação iremos ordernar de acordo com as medalhas */
	for(i = 2; i <= N; i++){
		for(j = i - 1, aux = pais[i];
			(j >= 1) && // Se não chegarmos a última posição
			((aux.ouro   > pais[j].ouro) 		||	// CHECA O OURO 
			((aux.prata  > pais[j].prata) 	  &&	// CHECA A PRATA
				(aux.ouro  == pais[j].ouro)) 	||	// --
			((aux.bronze > pais[j].bronze) 	  &&	// CHECA O BRONZE
				(aux.ouro  == pais[j].ouro)   &&	// --
				(aux.prata == pais[j].prata)) 	|| 	// --
			((aux.id 	 < pais[j].id) 		  &&	// CHECA O ID
				(aux.ouro   == pais[j].ouro)  &&	// --
				(aux.prata  == pais[j].prata) &&	// --
				(aux.bronze == pais[j].bronze))); j--){   // Em último caso o id menor leva
			/* Muda de posição */
			pais[j + 1] = pais[j];
		}
		pais[j + 1] = aux;
	}

	#ifdef DEBUG
	printf("==========================\n");
	#endif

	#ifdef DEBUG
	for(i = 1; i <= N; i++){
		printf("PAIS %d | OURO %d | PRATA %d | BRONZE %d\n", 	pais[i].id,
																pais[i].ouro,
																pais[i].prata,
																pais[i].bronze);
	}
	#endif

	printf("%d", pais[1].id);
	for(i = 2; i <= N; i++){
		printf(" %d", pais[i].id);
	}
	printf("\n");

	return EXIT_SUCCESS;
}
