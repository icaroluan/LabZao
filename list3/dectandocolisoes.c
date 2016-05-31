#include<stdio.h>
int main(){
	int Xo, Yo, X1, Y1, Xf, Yf, X2, Y2;
	scanf("%d%d%d%d", &Xo, &Yo, &X1, &Y1);
	scanf("%d%d%d%d", &Xf, &Yf, &X2, &Y2);
	if ((Xo == Yo || Xo < X1 || Yo < Y1) || (X1 == Y1 || X1 < Xf || Y1 < Yf) || (Xf == Yf || Xf< X2 || Yf < Y2) || (X2 == Y2)){
		printf("0\n");
	}
	else{
		printf("1\n");	
	}
	return 0;
} 
