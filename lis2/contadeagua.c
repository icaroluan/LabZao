#include<stdio.h>
int main(){
	int N, C, M;
	C = 7;
	M = 0;
	scanf("%d", &N);
    if (N <= 10){
    	printf("%d\n", C);
	}
	else if ((11 <= N) && (N <= 30)){
		N = N - 10;
		M = N * 1;
		C = C + M;
		printf("%d\n", C);
	}
	else if ((31 <= N) && ( N <= 100)){
		N = N - 30;
		M = N * 2;
		C = C +  M + 20;
		printf("%d\n", C);
	}
	else if (N >= 101){
		N = N - 100;
		M = N * 5;
		C = C + 20 + 140 + M;
		printf("%d\n", C);
	}	
	return 0;
} 
