#include <stdio.h>
int main(){
	int N, M, i, h, j, nt=0, mt=0;
	scanf("%d%d", &N, &M);
	int C[N][M], v[N];
	for(h=0;h<N;h++){
		v[i]=0;
	}
	for(i=0;i<N;i++){
		for(j=0;j<M;j++)
		    scanf("%d", &C[i][j]);
	}
	for(j=0;j<M;j++){
		for(i=0;i<N;i++)
		mt=mt+C[i][j];
		v[h]=v[h]+mt;
	}
	for(h=0;h<N;h++){
		printf("%d", v[h]);
	}
	printf("%d", v);
	
return 0;
}

