#include <stdio.h>

int main(){
	int N, P, i, D=0, h=0, C=0;
	scanf("%d%d", &N, &P);
	while((N!=0) && (P!=0)){
		D=N/P;
		C=N%P;
		if(C!=0){
			if(D<6){
				printf("Poodle\n");
			}
			else if((D>=6) && (D<=19)){
				h=D+1;
				h=h-6;
				printf("Poo");
				for(i=0;i<h;i++){
					printf("o");
				}
				printf("dle\n");
				
			}
			else if(D>=20){
				D=20;
				h=D-6;
				printf("Poo");
				for(i=0;i<h;i++){
					printf("o");
				}
				printf("dle\n");
				
			}
		}
		else if(C==0){
			if(D<6){
				printf("Poodle\n");
			}
			else if((D>=6) && (D<=19)){
				h=D;
				h=h-6;
				printf("Poo");
				for(i=0;i<h;i++){
					printf("o");
				}
				printf("dle\n");
				
			}
			else if(D>=20){
				D=20;
				h=D-6;
				printf("Poo");
				for(i=0;i<h;i++){
					printf("o");
				}
				printf("dle\n");
				
			}
		}
		scanf("%d%d", &N, &P);
		h=0;
	}
	return 0;
}
