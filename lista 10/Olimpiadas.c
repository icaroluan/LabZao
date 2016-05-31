#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[101], N, M, i, j, O, P, B, contO=0, contP=0, contB=0;
	scanf("%d %d", &N, &M);
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d%d%d", &O,&P,&B);
			vet[j].contO++;
			vet[j].contP++;
			vet[j].contB++;
		}
	}
		
		
		
		
	}
	return 0;
	
}

template<typename Tipo> void quickSort(Tipo* vetor, int esq, int dir)
	{
	 if (esq >= dir) 
	 return;
	 int i = esq, j = dir;
	 Tipo x = vetor[esq + (dir-esq)/2];
	 while (i < j){
	  	while (vetor[i] < x) i++;
	  	while (vetor[j] > x) j--;
	  		if (i <= j){
	   			Tipo tmp = vetor[i];
	   			vetor[i] = vetor[j];
	   			vetor[j] = tmp;
	   			i++;
	   			j--;
	  		}
	 	}
	 	quickSort(vetor, esq, j);
	 	quickSort(vetor, i, dir);
	}
 // do WIKI
	
	void quick(int vet[], int esq, int dir){
    int pivo = esq,i,ch,j;
    for(i=esq+1;i<=dir;i++){
        j = i;
        if(vet[j] < vet[pivo]){
         ch = vet[j];
         while(j > pivo){    
            vet[j] = vet[j-1];
            j--;
         }
         vet[j] = ch;
         pivo++;        
        }  
    }
    if(pivo-1 >= esq){
        quick(vet,esq,pivo-1);
    }
    if(pivo+1 <= dir){
        quick(vet,pivo+1,dir);
    }
 }
