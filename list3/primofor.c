#include<stdio.h>
int main(){
	int a, c, p, i;
	p=0;
	scanf("%d", &a);
	for (i=1;i<=a;i+=1){
		if (a%i==0){
			p=p+1;
		}
	}
    if (p>2){
	   printf("nao");
	}
	else if (a == 0 || a == 1){
	   printf("nao");
	}
	else if (p==2){
		printf("sim");
	}	
return 0;
}
