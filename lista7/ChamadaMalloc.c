#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, K, i, j;
	char** aux = (char*) malloc(N *sizeof(char*));
	scanf(" %d %d", &N, &K);
	char **palavra = (char**) malloc(N *sizeof(char*));
	for(i=0;i<N;i++){
		palavra[i] = (char*)malloc(N *sizeof(char*));
		scanf(" %s", palavra[i]);
    }
	for(i=0;i<(N-1);i++){
		for(j=0;j<N-1;j++){
			if(strcmp(palavra[j],palavra[j+1])>0){
				strcpy(aux,palavra[j]);
				strcpy(palavra[j],palavra[j+1]);
				strcpy(palavra[j+1],aux);
			}
		}
	}
    for(i=0;i<N;++i){
     	printf(" %s\n", palavra[K-1]);
     	break;
	}
	
	return 0;
}

