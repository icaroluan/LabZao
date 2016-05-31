#include<stdio.h>
int main(){
	int A, B, C, tb, tb2, tb3;
	scanf("%d%d%d", &A, &B, &C);
	tb = (A/2);
	tb2 = (B/3);
	tb3 = (C/5);
	if ((tb == tb2) && (tb == tb3)){
		printf("%d\n", tb);	
	}
	else if ((tb <= tb2) && (tb <= tb3)){
		printf("%d\n", tb);
	}
	else if ((tb2 <= tb) && (tb2 <= tb3)){
		printf("%d\n", tb2);
	}
	else if ((tb3 <= tb) && (tb3 <= tb2)){
		printf("%d\n", tb3);
	}
	return 0;
} 
