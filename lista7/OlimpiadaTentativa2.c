#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct Paises{
	int cont;
	int M; 
}Paises;


Paises pais[MAX];

int main(){
	int Ouro, Prata, Bronze , N, M, i, j;
	Paises aux;
	scanf(" %d %d", &N, &M);
		for(i=1;i<=N;i++){
			pais[i].cont=i;
			pais[i].M=0;
		}
		for(j=1;j<=M;j++){
			scanf(" %d %d %d", &Ouro, &Prata, &Bronze);
			pais[Ouro].M++;
			pais[Prata].M++;
			pais[Bronze].M++;
		}
		for(i=2;i<=N;i++){
			for(i=j-1,aux=pais[i];
			(j>=1) &&
			((aux.M>pais[j].M) 
			(aux.M==pais[j].M)));j--){
			pais[j+1]=pais[j];
				
			}
			pais[j+1]=aux;
		}
		printf("%d", pais[1].cont);
		for(i = 2; i <= N; i++){
			printf(" %d", pais[i].cont);
		}
		printf("\n");
	
	return 0;
}
