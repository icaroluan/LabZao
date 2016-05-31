#include <stdio.h>
const int MAXC=10001001;
const int MAXT=10001001;
int C, T, esq, dir, meio;
long long int raio[MAXC];
int alvo(long long int valor)
{
	int esq=1;
	int dir=C;
	if(valor>raio[C])
		
	return 0;
	 
	while(esq<dir){
		meio=(esq+dir)/2;
		
		if(raio[meio]>=valor){
			dir=meio;
		}
		else{
			esq=meio+1;
		}
	}
	return C+1-dir;
}
int main(){
	int i;
	long long int X, Y, resposta=0;
        scanf("%d %d",&C, &T);
	for(i=1;i<=C;i++){
		scanf("%lld", &raio[i]);
		raio[i]=raio[i]*raio[i];
	}
	for(i=1;i<=T;i++){	
		scanf("%lld %lld",&X,&Y);
		resposta=resposta + alvo(X*X+Y*Y);
	}
	
	printf("%lld\n", resposta);
	
	return 0;}
