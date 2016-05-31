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
        for(j=0;j<N;j++){
	        if((j+1) == P){
	              X[j]= 1;
	              X[j+D]=1;
	              X[j-D]=1;
            }
             
	    }
	}
	for(i=0;i<N;i++){
	   printf("%d\n", X[i]);
    }
	
return 0;
}
