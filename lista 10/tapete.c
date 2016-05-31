#include <stdio.h>

int main(){
	int L, N, R, S, T;
	scanf("%d%d", &L, &N);
	R=L/N;
	S=L-R;
	T=N*S;
	printf("%d", T);
	return 0;
}
