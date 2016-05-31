#include<stdio.h>
int main(){
int N, M, P, D, i, j;
    scanf("%d %d", &N, &M);
    int X[N];
    for (i=0;i<N;i++){
    	X[i]=0;
	}
    for(i=0;i<M;i++){
    	scanf("%d %d", &P, &D);
        for(j=P-1;j<N;j+=D){
	        X[j]= 1;
	    }
	    for(j=P-1;j>=0;j-=D){
	    	X[j]=1;
		}
	}
	for(i=0;i<N;i++){
	   printf("%d\n", X[i]);
    }
	
return 0;
}
