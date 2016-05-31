#include<stdio.h>
int main(){
	int Xo, Yo, X1, Y1, Xf, Yf, X2, Y2;
	scanf("%d%d%d%d", &Xo, &Yo, &X1, &Y1);
	scanf("%d%d%d%d", &Xf, &Yf, &X2, &Y2);
	if ( Xo > X2 || Yo > Y2 || X1 < Xf || Y1 < Yf ){ 
		printf("0\n");
	}
	else{
		printf("1\n");	
	}
	return 0;
} 
