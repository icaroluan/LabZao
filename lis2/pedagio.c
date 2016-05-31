#include<stdio.h>
int main(){
	int L, D, K, P, R, T;
	scanf("%d%d", &L, &D);
	scanf("%d%d", &K, &P);
	R = (L / D);
	T = (K*L)+(R*P);
	printf("%d\n", T);
	return 0;
}
