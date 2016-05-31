#include <stdio.h>

int main(){
	int A, N, F, i, T, c;
	T=0;
	c=0;
	scanf("%d\n", &A);
	scanf("%d\n", &N);
	for(i=0;i<N;i++){
		scanf("%d", &F);
		T=A*F;
		if(T>=40000000){
			c++;
		}
	T=0;
	}
	printf("%d", c);
	return 0;
}
