#include <stdio.h>

int main(){
	int R, A, B, i, Teste, totalA, totalB;
	scanf("%d\n", &R);
	Teste=1;
	totalA=0;
	totalB=0;
	while(R!=0){
		for(i=0;i<R;i++){
			scanf("%d%d\n", &A, &B);
			totalA=totalA+A;
			totalB=totalB+B;
		}
		if(totalA>totalB){
			printf("Teste %d\nAldo", Teste);
		}
		else if(totalB>totalA){
			printf("Teste %d\nBeto",Teste);
		}
	totalA=0;
	totalB=0;	
	scanf("%d", &R);
	printf("\n");
	Teste++;
	}
	return 0;
}
