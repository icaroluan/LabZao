#include <stdio.h>

int main(){
	int N, i, s=0, X1, Y1, X2, Y2, X=0, Y=0;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
		X=(X2-X1);
		Y=(Y2-Y1);
		s+=((X*X)+(Y*Y));
	}
	printf("%d", s);
	return 0;
	
}

