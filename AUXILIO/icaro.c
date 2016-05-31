#include <stdio.h>
#include <math.h>

int main(){
	long long N, quadrado, P1=0, P2=0, acumulador;

	scanf("%lld", &N);

	while(N != 0){
		quadrado = N * N;
		acumulador = 10;

		if(N != 1){
			while((P1 = (quadrado / acumulador)) > 0){
				P2 = quadrado % acumulador;
				acumulador *= 10;

				if(P2 == 0){
					continue;
				}

				if(P1 + P2 == N){
					printf("%lld: S\n", N);
					break;
				}
			}
			if(P1 == 0){
				printf("%lld: N\n", N);
			}
		}
		else{
			printf("%lld: S\n", N);
		}

		scanf("%lld\n", &N);
	}
	return 0;
}