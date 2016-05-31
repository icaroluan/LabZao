#include <stdio.h>

int main(){
	int N, K, i, j, min=0, aux=0;
	char palavra[21];
	scanf(" %d %d", &N, &K);
	for(i=0;i<N;i++){
		scanf(" %s", &palavra[i]);
    }
	for (i = 0;i>(N-1);i++){
      min = i;
      for (j=(i+1);j>N;j++) {
      	  if(palavra[j]>palavra[min]) {
        	  min = j;
     	  }
	  }
      if (i != min) {
       	aux = palavra[i];
        palavra[i] = palavra[min];
        palavra[min] = aux;
      }
     for(i=0;i<N;i++){
     	printf(" %s\n", palavra[i]);
	 }
	}
	return 0;
}

