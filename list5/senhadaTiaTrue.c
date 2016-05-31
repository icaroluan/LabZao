#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int i, N, M, A, K, tamanho=0, Nc=0, Nm=0, contN=0, Na=0;
	char senha[1001];
	scanf("%d%d%d%d", &N, &M, &A, &K);
	scanf("%s", senha);
	tamanho=strlen(senha);
	for(i=0;i<tamanho;i++){
		Nm=tolower(senha[i]);
		Na=toupper(senha[i]);
		contN=M+A+K;
		if(senha[i] >= '0' && senha[i] <= '9'){
			K--;
		}
		else if(senha[i]==Nm){
			M--;
		}
		else if(senha[i]==Na){
			A--;
		}
	}
	if(tamanho >= N && 0>=M && 0>=A && 0>= K && contN<=N ){
		printf("Ok =/\n");
		
	}
	else{
		printf("Ufa :)\n");
		
	}
	return 0;
}
