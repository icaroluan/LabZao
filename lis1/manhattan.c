#include <stdio.h>

int main(){
	int Xm, Ym, Xr, Yr, t, a, b;
	scanf("%d%d%d%d", &Xm, &Ym, &Xr, &Yr);
	a=(Xm-Xr);
	b=(Ym-Yr);
	if(a<0){
		a=a*-1;
	}
	if(b<0){
		b=b*-1;
	}
	t=a+b;
	printf("%d", t);
	return 0;
}
