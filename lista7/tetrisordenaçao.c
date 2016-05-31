#include <stdio.h>
int main(){
  int i, J, h, teste, pontos[12], total=0, k, maior_h, aux;
  char nome[16];
  teste=1;
  scanf("%d", &J);
  int resultado[J];
  while (J > 0){
  	for(h=0;h<J;h++){
  		resultado[h]=0;
  	}
        for (i = 0; i < J; i++){
         scanf("%s", nome);
         for(i=0;i<12;i++){
             scanf("%d", &pontos[i]);
             total=total+pontos[i];
             resultado[h]=resultado[h]+total;
	  }
	    for(h=0;h<J;h++){
	  	for(k=0;k<J-1;k++)
	  	    maior_h=k;
	  	    for(h=k+1;h<J;h++)
	  	         if(resultado[h]>resultado[maior_h])
	  	         maior_h=h;
	  	    aux=resultado[k];
	  	    resultado[k]=resultado[maior_h];
	  	    resultado[maior_h]=aux;
  	   }
  	    printf("Teste %d\n", teste);
  	    for(h=1;h<J+1;h++){
	    printf("%d %d %s\n", h, resultado[h], nome);
	   }	
			
      scanf("%d", &J);
    }
  return 0;
}
