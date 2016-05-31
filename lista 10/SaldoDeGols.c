#include <stdio.h>

int main(){
	int N, X, Y, i, j, I, J, Teste;
	scanf("%d\n", &N);
	Teste=1;
	I=0;
	J=0;
	while(N!=0){
		for(i=0;i<N;i++){
			scanf("%d%d\n", &X, &Y);
			if(X>=I){
				I=X;
				for(j=i;j<N;j++){
					if(X>=J){
						J=X;
					}
					else if((I==0) && (J==0))
					printf("Teste %d\nnenhum");
				}
			}
		}
	printf("Teste %d\n%d %d", Teste, I, J);
	scanf("%d", &N);
	printf("\n");
	Teste++;
    }
	return 0;
}
