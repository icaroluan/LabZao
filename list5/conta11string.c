#include<stdio.h>
#include<string.h>
int main(){
	int i, c, x, k, n;
	char P[1001];
	scanf("%s", P);
	x=strlen(P);
	k=-48;
	n=-48;
	while (P != 0){
		for(i=0;i<x;i+=2){
			k=k+P[i];
		}
		for(i=1;i<x;i+=2){
			n=n+P[i];
		}
		if((k-n)%11!=0){
			printf("%i is not a multiple of 11\n", c);
		}
		else if((k-n)%11==0){
			printf("%i is a multiple of 11\n", c);
		}
		
	scanf("%s", P);
	}
	
	return 0;
	}
	
	
