#include <stdio.h>
#include <stdlib.h>

int main(){
int X, Y, i, K, M, N, logotipo=1, j, h, l, p, a, b, c, d, cont=0, contM=0, w, z;
scanf(" %d %d", &X, &Y);
int lo[11][11], mat[321][241];
while((X && Y)!=0){
	for(i=0;i<X;i++){
		for(j=0;j<Y;j++){
			scanf(" %d", &lo[i][j]);
		}	
	}	
	scanf(" %d %d %d", &K, &M, &N);
	for(p=0;p<K;p++){
		for(l=0;l<M;l++){
			for(h=0;h<N;h++){
				scanf("%d", &mat[l][h]);
				if(mat[l][h]==lo[0][0]){
					mat[l][h]='*';
				}
			}
		}
		for(a=0;a<M;a++){
			for(b=0;b<N;b++){
				if(mat[a][b]=='*'){
					w=a;
					z=b;
					for(l=w;l<M;l++){
						for(h=z;h<N;h++){
							for(i=0;i<X;i++){
								for(j=0;j<Y;j++){
									if(mat[l][h]==lo[i][j]){
										contM++;
									}
									if(mat[l][h]!=lo[i][j]){
										break;
									}
								}
							}
						}
					}
				}
			printf(" %d ", mat[a][b]);
			}
		printf("\n");
		}
	if(contM==X*Y){
		cont++;
	}
	}
	printf("%d:contM\n", contM);
	printf(" %d:w %d:z\n", w, z);
	printf("Logotipo %d\n", logotipo++);
	printf("%d\n\n", cont);
	cont=0;
	contM=0;
	scanf("%d%d", &X, &Y);
	}
	return 0;
	}
	
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
int X, Y, i, K, M, N, logotipo=1, j, h, l, p, a, b, c, d, cont=0, r;
bool tente;
scanf(" %d %d", &X, &Y);
int lo[11][11], mat[321][241];
while((X && Y)!=0){
	tente=false;
	for(i=0;i<X;i++){
		for(j=0;j<Y;j++){
			scanf(" %d", &lo[i][j]);
		}	
	}	
	scanf(" %d %d %d", &K, &M, &N);
	for(p=0;p<K;p++){
		for(l=0;l<M;l++){
			for(h=0;h<N;h++){
				scanf(" %d", &mat[l][h]);
			}
		}
		for(a=0;a<M;a++){
		  for(b=0;b<N;b++){
				for(c=0;c<X;c++){
					for(d=0;d<Y;d++){
						if(mat[a][b]!=lo[c][d]){
							break;
						}
						
					}
				}
				tente=true;
			}
		}
		if(tente==true){
			cont++;
		}

	}
	printf("Logotipo %d\n", logotipo++);
	printf("%d\n\n", cont);
	cont=0;
	scanf(" %d %d", &X, &Y);
}
	return 0;
	}


// A da matriz extra

#include <stdio.h>
#include <stdlib.h>

int main(){
int X, Y, i, K, M, N, logotipo=1, j, h, l, p, a, b, c, d, cont=0, contM=0, w, z;
scanf(" %d %d", &X, &Y);
int lo[11][11], mat[321][241], mat2[321][241];
while((X && Y)!=0){
	for(i=0;i<X;i++){
		for(j=0;j<Y;j++){
			scanf(" %d", &lo[i][j]);
		}	
	}	
	scanf(" %d %d %d", &K, &M, &N);
	for(p=0;p<K;p++){
		for(l=0;l<M;l++){
			for(h=0;h<N;h++){
				mat2[l][h]=0;
			}
		}
		for(l=0;l<M;l++){
			for(h=0;h<N;h++){
				scanf("%d", &mat[l][h]);
				if(mat[l][h]==lo[0][0]){
					mat2[l][h]='*';
				}
			}
		}
		
		for(a=0;a<M;a++){
			for(b=0;b<N;b++){
				if(mat2[a][b]=='*'){
					w=a;
					z=b;
					for(l=w;l<M;l++){
						for(h=z;h<N;h++){ 
							for(i=0;i<X;i++){
								for(j=0;j<Y;j++){
									if(mat[l][h]==lo[i][j]){
										contM++;
									}
									if(mat[l][h]!=lo[i][j]){
										break;
									}
								}
							}
						}
					}
				}
			printf(" %d ", mat2[a][b]);
			}
		printf("\n");
		}
	if(contM==X*Y){
		cont++;
	}
	}
	printf("%d:contM\n", contM);
	printf(" %d:w %d:z\n", w, z);
	printf("Logotipo %d\n", logotipo++);
	printf("%d\n\n", cont);
	cont=0;
	contM=0;
	scanf("%d%d", &X, &Y);
	}
	return 0;
	}
