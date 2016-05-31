#include <stdio.h>

int main() {
	int i, x;
	scanf("%d", &x);
	int N[x+2], A[x+2];
	for(i=1;i<x+1;i++){
		scanf("%d", &N[i]);
	}
	N[0]=0;
	N[x+1]=0;
	for(i=0;i<x;i++){
		A[i]=0;
	}
	for(i=1;i<x+1;i++){
		A[i]=N[i]+N[i+1]+N[i-1];
		printf("%d\n", A[i]);
		
	}
	return 0;
}
