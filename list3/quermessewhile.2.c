#include<stdio.h>
int main(){
	int c, N, X, teste;
	scanf("%d", &N);
	c = 0;
	teste = 1;
	while (N!=0){
		printf("Teste %d\n", teste);
		while(c <= N){
		    scanf("%d", &X);
		    c = c +1;
		    if (c == X){
			   printf("%d\n", c);
		    }
	    }
	c=0;    
	printf("\n");			    
	scanf("%d", &N);
	teste = teste + 1;
	}
	while (N == 0){
	    break;
    }
return 0;
}

