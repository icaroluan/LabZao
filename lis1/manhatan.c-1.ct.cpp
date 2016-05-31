#include <stdio.h>
#include <stdlib.h>
int main(){
	int Xm, Ym, Xr, Yr, total=0, total2=0,total3=0;
	scanf("%d%d%d%d", &Xm, &Ym, &Xr, &Yr);
	total2=(Xm-Xr);
	total3=(Ym-Yr);
	if(total2<=0){
		total2=total2*-1;
	}
	if(total3<=0){
		total3=total3*-1;
	}
	total=total2+total3;	
	if(total<0){
		total=total*-1;
		printf("%d", total);	
	}
	else if(total>=0){
		printf("%d", total);
	}
	
	return 0;
}
