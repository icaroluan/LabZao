#include <stdio.h>

void fatorial(int N){
	int i, r=1;
	scanf(" %d", &N);
	for(i=1;i<=N;i++){
		r=r*i;
	}
	printf("%d\n", r);
	
}


int main(){
	int N;
	fatorial(N);
	return 0;
	
}
