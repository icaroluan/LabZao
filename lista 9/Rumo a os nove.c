#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*transforma int em string: itoa*/

char palavra[1050];
char palavras[1050],pP[1001];
long int pn=0, valor9, tp=0, p=0;
long int i, cont=0, tamanho=0,t, somav=0, soma,t;

long int grauDe9(char pa[], long int tp){
	if(pa[0]=='9' && tp==1){
		cont++;
	}
	while(t!=1){
		soma=0;
		for(i=0;i<tp;i++){
			soma+=pa[i]-48;
		}
		if(soma%9==0){
			cont++;
		}
		pP[i]=soma+48;
		t=strlen(pP);
		tp=t;
		
	}
	somav=cont;
	cont=0;
	return somav;
}


int main(){
	scanf(" %s\n", palavra);
	while(palavra[0]!='0'){
		tp=strlen(palavra);
		for(i=0;i<tp;i++){
			palavras[i]=palavra[i];
		}
		valor9=grauDe9(palavras,tp);
		if(valor9>=1){
			printf("%s is a multiple of 9 and has 9-degree %ld.\n",palavra,valor9);
		}
		else{
			printf("%s is a not multiple of 9.\n", palavra);
		}
	scanf(" %s\n", palavra);	
	}
	return 0;}

