#include<stdio.h>
#include<string.h>
int main(){
	int i, c, x, k, n;
	char P[1001];
	scanf("%s", P);
	x=strlen(P);
	k=0;
	n=0;
	while (atoi(P) != 0){
	k=0;
	n=0;
		for(i=0;i<x;i+=2){
			k+=(P[i]-48);
		}
		for(i=1;i<x;i+=2){
			n+=(P[i]-48);
		}
		if((k-n)%11!=0){
			printf("%s is not a multiple of 11.\n", P);
		}
		else if((k-n)%11==0){
			printf("%s is a multiple of 11.\n", P);
		}
	scanf("%s", P);
	x=strlen(P);
	}
	
	return 0;
	}
