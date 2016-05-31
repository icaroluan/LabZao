#include<stdio.h>
int main(){
	int J, Z, c, N, moeda, teste;
	scanf("%d", &N);
	c = 1;
	teste = 1;
	moeda = 0;
	while (N!=0){
		printf("Teste %d\n", teste);
		while(c <= N){
		    scanf("%d %d", &J, &Z);
		    moeda = moeda+(J - Z);
		    printf("%d\n", moeda);
		    c = c +1;
		    
	    }
	printf("\n");		    
	scanf("%d", &N);
	c = 1;
	teste = teste + 1;
	moeda = 0;
	}
	while (N == 0){
	    break;
    }
return 0;
}

