#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_ALVOS 	1000001
#define MAX_TIROS 	1000001

long long int  alvos_raios[MAX_ALVOS] = {0};

int main(){
	int C, T;
	long long int i, j, x, y, soma;

	soma = 0;
	scanf(" %d %d", &C, &T);

	for(i = C - 1; i >= 0; i--)
		scanf(" %lld", &alvos_raios[i]);

	for(i = 0; i < T; i++){
		float raio;
		scanf(" %lld %lld", &x, &y);

		raio = sqrt(((x * x) + (y * y)));

		if(raio == 0) j = C;
		else for(j = 0; (j < C) && (raio <= alvos_raios[j]); j++);

		soma += j;
	}

	printf("%lld", soma);

	return EXIT_SUCCESS;
}

long long int buscaBinaria (long long int x, long long int n, long long int v[]) {
   long long int e, m, d;                              
   e = 0; d = n-1;                           
   while (e <= d) {                          
      m = (e + d)/2;                        
      if (v[m] == x) return m;               
      if (v[m] < x) e = m + 1;               
      else d = m - 1;                        
   }                                         
   return -1;                                
}

int buscabinaria(int x, int vet[], int y){
	int e, m, d;
	e=0;
	d=x-1;
	while(e<=d){
		m=(e+d)/2;
		if(vet[m]==y){
			return m
		}
		if(vet[m]< x){
			e=m+1;
		}else{
			d=m-1;
		}
		retunr -1;
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_ALVOS 	1000001

long long int busca_b(long long int raio, long long int alvos_raios[], long long int C, long long int T) {
   long long int e, m, d, soma=0;                              
   e = 0; 
   d = C-1;
   if((sqrt(raio)==0) || ((sqrt(raio)) < (alvos_raios[e]))){
   	soma=soma+C;
   }
   if(alvos_raios[d]==sqrt(raio)){
   	soma=soma+e+1;
   }else{
   		while (e < d) {                          
      		m = (e + d)/2;                        
      		if (alvos_raios[m] == sqrt(raio)){ 
      			soma=soma+(C-m);
      			break;
      		}
      		if ((alvos_raios[m+1]) > (sqrt(raio)) && ((alvos_raios[m])<sqrt(raio))){
      			soma=soma+(C-m-1);
      			break;
      		}else{
				if(alvos_raios[m] < sqrt(raio)){     	
      				e = m + 1; 
      			}else{
      				d = m;
      			}
      		}
   		}
   }                                         
   return soma;                                
}

int main(){
	long long int alvos_raios[MAX_ALVOS];
	long long int i, j, x, y, raio, a, b, raioB, C, T, ra, rb, soma;
	soma = 0;
	scanf(" %lld %lld", &C, &T);

	for(i = 0; i < C; i++){
		scanf(" %lld", &alvos_raios[i]);
    }
	for(j = 0; j < T; j++){
		scanf(" %lld %lld", &x, &y);
		if(x<0){
			a=x*-1;
		}else{
			a=x;
		}
		if(y<0){
			b=y*-1;
		}else{
			b=y;
		}
		ra=pow(a,2);
		rb=pow(b,2);
		raio=(ra+rb);
		
		raioB = busca_b(raio,alvos_raios,C,T);

		soma += raioB;
	}
	printf("%lld\n", raio);
	printf("%lld", soma);

	return EXIT_SUCCESS;
}
