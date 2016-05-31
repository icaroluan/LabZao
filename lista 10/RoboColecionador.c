#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, M, S, i, j, h, cont, comandos;
	char Pista[101][101];
	scanf("%d%d%d", &N, &M, &S);
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%s", Pista[i][j]);
		}
	}
	for(h=0;h<S;h++){
		scanf("%s", comandos);
	}
	return 0;
}
