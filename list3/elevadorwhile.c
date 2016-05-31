#include<stdio.h>
int main(){
	int  N, S, C, E, teste, total, confirmar;
	scanf("%d%d", &N, &C);
	teste = 1;
	total = 0;
	confirmar = 0;
	while (teste <= N){
		scanf("%d%d", &S, &E);
		total = total -(S - E);
		teste = teste + 1;
		if (total > C){
			confirmar = 1;
		}
    }
	if  (confirmar == 1){
		printf("S\n");
	}
	else{
		printf("N\n");
	}
return 0;
}
