#include <stdio.h>

int main(){
	int i, h,j, X, Y, L, C, N;
	int matriz[22][7];

	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			matriz[i][j] = 0;
		}		
	}

	for(i=0;i<7;i++){
		for(h=0;h<7;h++){
			printf(" %d", matriz[i][h]);
		}
			printf("\n");
	}

	scanf("%d %d %d %d", &X, &Y, &L, &C);

	//ESTA PARTE Q PRECISA SER ALTERADA LEMBRAR DE PREENCHER PERIMETRO COM NUMERO 1
	for(i=X;i<L;i--){
		for(j=Y;j<C;j--){

			matriz[i][j] = 1;
		}
	
	}

	printf("\n");

	for(i=0;i<7;i++){
		for(h=0;h<7;h++){
			printf(" %d", matriz[i][h]);
		}
			printf("\n");
	}
}
