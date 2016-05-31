#include<stdio.h>
int main(){
	int  i, N, X, teste;
	scanf("%d", &N);
	teste = 1;
	while (N!=0){
	    printf("Teste %d\n", teste);
		for(i=1;i<=N;i+=1){
            scanf("%d", &X);
	        if (i == X){
		        printf("%d\n", i);
		    }    
	    }
	printf("\n");			    
	scanf("%d", &N);
	i=0;
	teste = teste + 1;
	}
	while (N == 0){
	    break;
    }
	
return 0;
}
