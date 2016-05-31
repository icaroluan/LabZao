#include <stdio.h>
#include <math.h>

int main(){
	int N, i, C, D, z;
	double X=0, Y=0;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%d %d", &D, &C);
		Y=C*log(D);
		if(X < Y) {
			X=Y;
			z=i;
		}
	}
	printf("%d\n", z);
	return 0;
}

// checar 297 2223 2728 4879 5292 17344 22222
if(cont2%2!=0 && cont%2==0 && ){
					h=cont/2;
					h2=pow(10,h);
					Mc1=(M/h2)/10;
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
				
				for(i=0;Nc>=1;i++){
					Nc=Nc/10;
					cont2++;
				}
