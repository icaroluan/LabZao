#include <stdio.h>

int main() {
	int i, x;
	scanf("%d", &x);
	int N[x+1], A[x+1];
	for(i=0;i<x;i++){
		scanf("%d", &N[i]);
	}
	for(i=0;i<x;i++){
		A[i]=0;
	}
	for(i=0;i<x;i++){
		if(N[i+1]==1 || N[i]==1 || N[i-1]==1){
			A[i]=A[i]+1;
		}
		if(N[i-1]==1 && N[i]==1){
			A[i]=A[i]+1;
		}
		if(N[i+1]==1 && N[i]==1){
			A[i]=A[i]+1;
		}
		if(N[i]==0 && N[i+1]==1 && N[i-1]==1){
			A[i]=A[i]+1;
		}
		printf("%d\n", A[i]);
		
	}
	return 0;
}

int main() {
	int i, x;
	scanf("%d", &x);
	int N[1000], A[1000];
	
	for(i=1;i<x+1;i++){
		scanf("%d", &N[i]);
	}
	N[x+1]=0;
	N[0]=0;
	for(i=0;i<x;i++){
		A[i]=0;
	}
	for(i=1;i<x+1;i++){
	A[i]=N[i]+N[i+1]+N[i-1];
	
		printf("%d\n", A[i]);
		
	}
	return 0;
}
