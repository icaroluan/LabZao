#include<stdio.h>
int main(){
	int P1, C1, P2, C2, et, dt;
	scanf("%d%d%d%d", &P1, &C1, &P2, &C2 );
	et = P1 * C1;
	dt = P2 * C2;
	if (et > dt){
		printf("-1\n");
	}
	else if ( et < dt){
		printf("1\n");
	}
	else if (et == dt){
		printf("0\n");
	}
	return 0;
}
