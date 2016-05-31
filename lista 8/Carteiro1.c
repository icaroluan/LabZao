#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int CasasM[45000];

long long int ProcuraCasa(long long int numC, long long int NCa){
	long long int dir=NCa-1, esq=0, meio=0;
	while(esq<dir){
		meio=(esq+dir)/2;
		if(CasasM[meio]<numC){
			esq=meio+1;
		}
		else{
			dir=meio;
		}
	}
	return esq;
}

int main(){
	long long int NC, NM, i, j, aux=0, cont=0, numCasa, numCarteiro;
	scanf(" %lld %lld", &NC, &NM);
	for(i=0;i<NC;i++){
		scanf(" %lld", &CasasM[i]);
	}
	for(i=0;i<NM;i++){
		scanf(" %lld", &numCasa);
		numCarteiro=ProcuraCasa(numCasa,NC);
		cont=cont+abs(aux-numCarteiro);
		aux=numCarteiro;
	}
	printf("%lld\n", cont);
	return 0;
}
