#include <stdio.h>
#include <math.h>

int main(){
	long int i, N, M, h=0, Mc=0, Mc1=0, Mc2=0, h2=0, soma=0, cont=0;
	scanf("%d", &N);
	while(N!=0){
			M=N*N;
			Mc=M;
				for(i=0;Mc>=1;i++){
					Mc=Mc/10;
					cont++;
				}
				if(cont%2==0){
					h=cont/2;
					h2=pow(10,h);
					Mc1=M/h2;
					Mc2=M%h2;
					if(Mc2>=0){
						soma=Mc1+Mc2;
						if(soma==N){
							
							printf("%ld: S\n", N);
						}
						else{
							
							printf("%ld: N\n", N);
						}
					}
				}
				else if(cont%2!=0){
					h=cont/2;
					h2=pow(10,h);
					Mc1=(M/h2)/10;
					Mc2=M%(h2*10);
					if(Mc2>=0){
						soma=Mc1+Mc2;
						if(soma==2){
							printf("%ld: S\n",N);
						}
						else if(soma==N){
							
							printf("%ld: S\n", N);
						}
						else{
							
							printf("%ld: N\n", N);
						}
					}
				}
		scanf("%ld", &N);
		cont=0;
	}
	return 0;
}
