#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int QuantPaes[10000];
int numS(int Sa, int Me){
	int j, partE=0;
	for(j=0;j<Sa;j++){
		partE=(partE+(QuantPaes[j]/Me));
	}
	return partE;
}
bool NumV(int Ss, int Sm, int Sp){
	return numS(Ss, Sm) >= Sp;
}

int main(){
	int P, S, i, esq=1, dir=0, meio, partE=0, partD=0, cmS;
	
	scanf(" %d", &P);
	scanf(" %d", &S);
	for(i=0;i<S;i++){
		scanf(" %d", &QuantPaes[i]);
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
		printf(" %d\n", S);
	}
	else{
		cmS=0;
		while(esq<=dir){
			meio=esq+(dir-esq)/2;
			partE=numS(S,meio);
			if(NumV(S,meio,P)){
				esq=meio+1;
				cmS=meio;
			}
			else{
				dir=meio-1;
			}
		}
		printf(" %d\n", cmS);
	}
	
	return 0;
}
