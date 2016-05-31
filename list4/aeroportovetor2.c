#include<stdio.h>
int main(){
	int A, V, X, Y, i, j, p, d, teste, contM;
	teste=0;
	if(V==0){
    	printf("0");
	}
	scanf("%d %d", &A, &V);
	while (A != 0){
		int DP[A];
		
		for(i=0;i<A;i++){
		   DP[i]=0;
		}
	   for(i=0;i<V;i++){
	   	  scanf("%d %d", &X, &Y);
	   	  DP[X-1]++;
	   	  DP[Y-1]++;
	   }	   
	   contM=1;
	   for (j=0;j<A;j++){
	   	    if(DP[j]>contM){
	   	    	contM=DP[j];
	   	    	
			   }
	   }
	   teste++;
	   printf("Teste %d\n", teste);   
	   for(j=0;j<A;j++){
	   	   if(DP[j]==contM)
	   	      printf("%d ", j+1);
       }
       
	printf("\n");   
	scanf("%d %d", &A, &V);   
    }
return 0;
}
