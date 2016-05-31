#include <stdio.h>

int main(){
	int P, R, J, i, k, A, teste, x;
	teste=0;
	scanf("%d%d", &P, &R);
	int v[P+1], v2[P+1] , v3[P+1];
	while((P && R)== 0){
		for(i=0;i<P;i++;){
			scanf("%d", &v[i]);
		}
		scanf("%d%d", &A, &J);
		for(k=0;k<A;k++){
			scanf("%d", &v2[k]);
			if(J==v2[k]){
				v2[k]=2;
				}
		}
	
	teste++;
	scanf("%d%d", &P, &R);
	printf("Teste %d\n%d", teste, x)
	}

	return 0;
}
