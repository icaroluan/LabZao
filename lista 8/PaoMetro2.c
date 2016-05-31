#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long int QuantPaes[10000];
long int numS(long int Sa, long int Me){
	long int j, partE=0;
	for(j=0;j<Sa;j++){
		partE=(partE+(QuantPaes[j]/Me));
	}
	return partE;
}
bool NumV(long int Ss,long  int Sm,long  int Sp){
	return numS(Ss, Sm) >= Sp;
}

int main(){
	long int P, S, i, esq=1, dir=0, meio, partE=0, partD=0, cmS;
	
	scanf(" %ld", &P);
	scanf(" %ld", &S);
	for(i=0;i<S;i++){
		scanf(" %ld", &QuantPaes[i]);
		if(dir<QuantPaes[i]){
			dir=QuantPaes[i];
		}
	}
	for(i=0;i<S;i++){
		partE=partE+QuantPaes[i];
		partD=partE+QuantPaes[i]/dir;
	}
	if(partE==P){
		printf("1\n");
	}
	else if(partD==P){
		printf(" %ld\n", S);
	}
	else{
		cmS=0;
		while(esq<=dir){
			meio=esq+(dir-esq)/2;
			partE=numS(S,meio);
			if(NumV(S,meio,P)==true){
				esq=meio+1;
				cmS=meio;
			}
			else{
				dir=meio-1;
			}
		}
		printf(" %ld\n", cmS);
	}
	
	return 0;
}
