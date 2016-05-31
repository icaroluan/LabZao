#include <stdio.h>

int main(){
int N, D, i, s=0;
long long int T=0,So=0, M;
char C[1];
scanf("%d %lld", &N, &M);
M*=M;
for(i=0;i<N;i++){
	scanf(" %c%d", &C[0], &D);
	if(C[0]=='N'){
		T+=D;
	}else if(C[0]=='L'){
		So+=D;
	}else if(C[0]=='S'){
		T-=D;
	}else if(C[0]=='O'){
		So-=D;
	}
    if(T*T+So*So> M){
    	s=1;
	}
}
printf("%d\n", s);
  return 0;
}
