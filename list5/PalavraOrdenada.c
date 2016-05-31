#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int P, i, h, tamanho=0;
	char palavra[50];
	scanf("%d", &P);
	for(i=0;i<P;i++){
		scanf(" %s", &palavra);
		tamanho=strlen(palavra);
		for(h=1;h<tamanho;h++){
			if(toupper(palavra[h-1])>=toupper(palavra[h])){
				break;
			}
		}
		if(h==tamanho){
			printf(" %s: O\n", palavra);
		}
		else{
			printf(" %s: N\n", palavra);
		}
		
	}
	return 0;
}
