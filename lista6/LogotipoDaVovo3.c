#include <stdio.h>
#include <stdlib.h>

 

int main(){

	int q, r, a, b, c, O, G, d, K, M, N, p, l, h, cont=0, contM=0, logotipo=1; 
	int lo[20][20], mat[350][260];
	scanf(" %d %d", &O, &G);
	while(O!=0 && G!=0){
	
	for(q=0;q<O;q++){			
		
	for(r=0;r<G;r++){
	scanf(" %d", &lo[q][r]);
	}
	}
	scanf(" %d %d %d", &K, &M, &N);
	for(p=0;p<K;p++){
	
	for(a=0;a<M;a++){
	
	for(b=0;b<N;b++){
	scanf("%d", &mat[a][b]);
	}
	}
	for(a=0;a<M;a++){
	for(b=0;b<N;b++){
	if(mat[a][b]==lo[0][0]){	
	for(c=0;c<O;c++){				 
	for(d=0;d<G;d++){			
	if(mat[a+c][b+d]!=lo[c][d]){
	cont=1;
	d=G;
	}	
	}	
	if(cont==1){
	c=O;	
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
scanf(" %d %d", &O, &G);
	}return 0;}
