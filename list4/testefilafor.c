#include<stdio.h>
int main(){
int N, M, i , j;
    scanf("%d", &N);
    int F[N];
    for (i=0;i<N;i++){
    	scanf("%d", &F[i]);
	}
    scanf("%d", &M);
    int S[M];
    for (i=0;i<M;i++){
    	scanf("%d", &S[i]); 
        for(j=0;j<N;j++){
    	    if(S[i]==F[j])
    		   F[j]=0;
	    }
    }
	for(i=0;i<N;i++){
	    if(F[i]!=0)
	    	printf("%d ", F[i]);
	}
	printf("\n");
	
return 0;	
}
