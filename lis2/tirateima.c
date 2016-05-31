#include<stdio.h>
int main(){
	int X, Y;
	scanf("%d%d", &X, &Y);
	if ((X < 0 ) && (Y < 0)){
		printf("fora\n");
	}
	else if ((X > 432) && (Y > 468)){
		printf("fora\n");
	}
	else if((X >= 0 & X <= 432) && (Y >= 0 & Y <= 468)){
		printf("dentro\n");
	}
	else if ((X > 432) && (Y <= 468)){
		printf("fora\n");
	}
	else if ((X <= 432) && (Y > 468)){
		printf("fora\n");
	}
	else if ((X < 0) && (Y <=468)){
		printf("fora\n");
	}
	else if ((X <= 432) && (Y < 0)){
		printf("fora\n");
	}
	return 0;
} 
