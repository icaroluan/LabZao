#include <stdio.h>
int main(){
	int N, cont=0, i, j,comidatotal=0;
	scanf("%d", &N);
	char vet[101];
	for(i=0;i<N;i++){
		scanf("%c", &vet[i]);
		if(vet[i] == 'o'){
			cont++;
			if(comidatotal < cont){
				comidatotal=cont;
			}
		}
		else if(vet[i]== 'A' ){
			cont=0;
		}
	}
	for(j=N;j>0;j--){
		if(vet[j] == 'o'){
			cont++;
			if(comidatotal < cont){
				comidatotal=cont;
			}
		}
		else if(vet[j]== 'A' ){
			cont=0;
		}
	}
	if(comidatotal < cont){
		comidatotal=cont;
	}
	printf("%d\n", cont);
	printf("%d", comidatotal);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, cont=0, i, j,comidatotal=0;
	scanf("%d", &N);
	char MAT[101][101];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%c", &MAT[i][j]);
			if(MAT[i][j]=='o'){
				cont++;
				if(comidatotal < cont){
					comidatotal=cont;
				}
			}
			else if(MAT[i][j]=='A'){
				cont=0;
			}
		}
	}
	for(i=N;i>0;i--){
		for(j=N;j>0;j--){
			if(MAT[i][j]=='o'){
				cont++;
				if(comidatotal < cont){
					comidatotal=cont;
				}
			}
			else if(MAT[i][j]=='A'){
				cont=0;
			}
		}
	}
	if(comidatotal < cont){
		comidatotal=cont;
	}
	printf("%d", comidatotal);
	return 0;
}

#include <stdio.h>
#include <stdio.h>
int main(){
	int N, cont=0, i, j,comidatotal=0, final;
	scanf("%d", &N);
	char vet[101];
	for(i=0;i<N;i++){
		scanf("%c", &vet[i]);
		for(j=0;j<N;j++){
			if((final=i%2)==0){
				if(final=f){
					if(vet[final] == 'o'){
						cont++;
						if(comidatotal < cont){
							comidatotal=cont;
						}
					}
				}	else if(vet[final]== 'A' ){
						cont=0;
					}
				else if(final=(N-1-j)){
					if(vet[final] == 'o'){
						cont++;
						if(comidatotal < cont){
							comidatotal=cont;
						}
					}
					else if(vet[final]== 'A' ){
					cont=0;
					}
				}
			}

		}
	}
	if(comidatotal < cont){
		comidatotal=cont;
	}
	printf("%d\n", cont);
	printf("%d", comidatotal);
	return 0;
}
// FUNCIONA
#include <stdio.h>
#include <stdio.h>
int main(){
	int N, cont=0, i, j,comidatotal=0, final;
	scanf("%d", &N);
	char vet[101];
	for(i=0;i<N;i++){
		scanf("%c", &vet[i]);
		for(j=0;j<N;j++){
			final=i%2==0 ? j :(N-1-j);
			if(vet[final]=='o'){
				cont++;
				if(comidatotal<cont){
					comidatotal=cont;
				}
			}
			else if(vet[final]=='A'){
				cont=0;
			}
		}
	}
	if(comidatotal < cont){
		comidatotal=cont;
	}
	printf("%d\n", cont);
	printf("%d", comidatotal);
	return 0;
}
