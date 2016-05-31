#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){ 
	int i, j, total=0, teste=1, P, N, aux, maior, menor;
	scanf("%d", N);
	char nome[16];
	int vetsoma[N];
	while (N!=0){
		for(i=0;i<N;i++){
			scanf("%s", nome[i]);
		}
		for(j=0,j<12,j++){
			scanf("%d", &P);
			vetsoma[j]+=P;
		}
		
	}
	return 0;
}

