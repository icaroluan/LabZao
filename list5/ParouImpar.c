#include <stdio.h>
#include <string.h>

int main(){
	int x, i, A, B, soma=0, Teste=1;
	char p1[11], p2[12];
	scanf("%d", &x);
	while(x!=0){
		scanf(" %s %s", p1, p2);
		printf("Teste %d\n", Teste);
		for(i=0;i<x;i++){
			scanf("%d%d", &A, &B);
			soma=A+B;
			if(soma%2==0){
				printf(" %s\n", p1);
			}
			else{
				printf(" %s\n", p2);
			}
		}
		scanf("%d", &x);
		Teste++;
	} 
	
	return 0;
}
