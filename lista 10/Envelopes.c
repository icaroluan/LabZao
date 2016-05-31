#include <stdio.h>

 int main(){
 	int N, K, h, cont=0, menor=0, elemento, i, j, min, aux;
	scanf("%d%d", &N, &K);
	int vet[N+1];
	for(h=0;h<N;h++){
		scanf("%d", &vet[h]);
		elemento=vet[0];
	}
    for (i = 0; i < (N-1); i++) {
      min = i;
      for (j = (i+1); j < N; j++) {
        if(vet[j] < vet[min]) 
          min = j;
     }
     if (i != min) {
       aux = vet[i];
       vet[i] = vet[min];
       vet[min] = aux;
     }
   }
   for(i=0;i<N;i++){
   		if(elemento==vet[i]){
			cont++;
			menor=cont;
		}
	}
	for(i=0;i<N;i++){	
		if(elemento!=vet[i]){
			cont=0;
			elemento=vet[i];
			if(elemento==vet[i]){
				cont++;
				if(cont<=menor){
					menor=cont;
				}
			}
		}
	}
	printf("%d", cont);
	printf("%d", elemento);
 	printf("%d", menor);
 	
 	return 0;
 }

#include <stdio.h>

int main(){
	int N, K, i, cont=0, menor=0, elemento;
	scanf("%d%d", &N, &K);
	int vet[N+1];
	for(i=0;i<N;i++){
		scanf("%d", &vet[i]);
		elemento=vet[0];
		if(elemento==vet[i]){
			cont++;
			menor=cont;
		}
	}
	for(i=0;i<N;i++){	
		if(elemento!=vet[i]){
			elemento=vet[i];
			if(elemento==vet[i]){
				cont++;
				if(cont>=menor){
					menor=menor;
				}
				else if(cont<=menor){
					menor=cont;
				}
			}
		}
	}
	printf("%d\n", elemento);
	printf("%d", menor);
	return 0;
}



 void selection_sort(int vet[], int N) 
  { 
    int i, j, min, aux;
    for (i = 0; i < (tam-1); i++) {
      min = i;
      for (j = (i+1); j < tam; j++) {
        if(num[j] < num[min]) 
          min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
   }
 }
