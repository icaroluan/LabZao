#include <stdio.h>

int main(){
int N, C, D, T=0;
scanf("%d%d%d", &N, &C, &D);
while(N!=0 && C!=0 && D!=0){
	T=(D*C*N);
	printf("%d\n", T);
	scanf("%d%d%d", &N, &C, &D);
	T=0;
}
return 0;
}
