#include <stdio.h>
int main(){
  int  N, M, h, k, maior_h, aux;
  scanf("%d%d", &N, &M);
  int v[N];
    for(h=0;h<N;h++){
    	scanf("%d", &v[h]);
	}
	  	for(k=0;k<N-1;k++){
	  	    maior_h=k;
	  	    for(h=k+1;h<N;h++)
	  	       if(v[h]>v[maior_h])
	  	         maior_h=h;
	  	         aux=v[k];
	  	         v[k]=v[maior_h];
	  	         v[maior_h]=aux;
  	    }
  	    for(h=0;h<M;h++){
	       printf("%d\n", v[h]);
	    }	
  return 0;
}
