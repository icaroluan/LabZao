#include <stdio.h>
 
int main(){
	int N, M, D, i, T=0, So=0, s=0;
	char C[1];
	scanf("%d %d", &N, &M);
	M*=M;
	for(i=0;i<N;i++){
		scanf(" %c %d", &C[0], &D);
		if(C[0]=='N'){
			T+=D;
		}
		else if(C[0]=='L'){
			So+=D;
		}
		else if(C[0]=='S'){
			T-=D;
		}
		else if(C[0]=='O'){
			So-=D;
		}
		if(T*T + So*So > M){
			s = 1;
		}
	}
	printf("%d\n", s);
	  return 0;
	}

