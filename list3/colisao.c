#include<stdio.h>
int main(){
	int l1,l2,l3,l4,l5,l6,l7,l8;
	scanf("%d %d %d %d",&l1,&l2,&l3,&l4);
	scanf("%d %d %d %d",&l5,&l6,&l7,&l8);
	if ((l3<l5)||(l7<l1)||(l4<l6)||(l8<l2)||(l1>l7)||(l5>l3)||(l2>l8)||(l6>l4)){
		printf("0");
	}
	else {
		printf("1");
	}
	return 0;
}
