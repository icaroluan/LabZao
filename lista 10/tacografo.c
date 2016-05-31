#include <stdio.h>

int main(){
	int N, T, V, i, total;
	scanf("%d\n", &N);
	total=0;
	for(i=0;i<N;i++){
		scanf("%d%d\n", &T, &V);
		total=total+(T*V);		
	}
	printf("%d", total);
}
