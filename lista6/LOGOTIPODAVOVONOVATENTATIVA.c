#include <stdio.h>
#include <stdlib.h>

 

int main(){

	int i, j, a, b, c, X, Y, d, K, M, N, p, l, h, cont=0, contM=0, logotipo=1; 
	int lo[20][20], mat[350][260];
	scanf(" %d %d", &X, &Y);
	while(X!=0 && Y!=0){
		for(i=0;i<X;i++){			
			for(j=0;j<Y;j++){
				scanf(" %d", &lo[i][j]);
			}
		}
		scanf(" %d %d %d", &K, &M, &N);
		for(p=0;p<K;p++){
			for(i=0;i<M;i++){
				for(j=0;j<N;j++){
					scanf("%d", &mat[i][j]);
				}
			}
			for(a=0;a<M;a++){
				for(b=0;b<N;b++){
					if(mat[a][b]==lo[0][0]){	
						for(c=0;c<X;c++){				 
							for(d=0;d<Y;d++){			
								if(mat[a+c][b+d]!=lo[c][d]){
									cont=1;
									d=Y;
								}	
							}	
							if(cont==1){
								c=X;	
							}
						}
						if(cont==0){
							contM++;
						}
						cont=0;	
					}
				}
			}	
		}
	printf("Logotipo %d\n", logotipo++);
	printf("%d\n\n", contM);
	contM=0;
	scanf(" %d %d", &X, &Y);
		
	}
return 0;
}
