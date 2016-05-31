#include <stdio.h>

int investimento(int a, int b){
	if(a<=b){
		return 1;
	}
	if(a>b){
		if(a%2==0){
			return 2*investimento(a/2,b);
			
		}
		if(a%2!=0){
			return investimento(((a/2)+1),b)+investimento(a/2,b); 
		}
	}
}

int main(){
	int N, X;
	scanf(" %d %d", &N, &X);
	while((N && X)!=0){
	printf(" %d\n", investimento(N,X));
	scanf(" %d %d", &N, &X);
	}
	return 0;
}
