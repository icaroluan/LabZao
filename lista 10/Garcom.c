#include <stdio.h>

int main(){
	int N, i,  L, C, Q;
	Q=0;
	scanf("%d\n", &N);
	for(i=0;i<N;i++){
		scanf("%d%d\n", &L, &C);
		if(L>C){
			Q=Q+C;
		}
	}
	printf("%d", Q);

return 0;	
}
