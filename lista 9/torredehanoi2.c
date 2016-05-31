#include <stdio.h>
#include<math.h>
int main(){
	int N, cont, teste;
     scanf("%d", &N);
	cont=1;
	teste=1;
	while(N!=0){
    	if (N == 1)
    		cont=1;
    	
    	else{
        	cont=pow(2,N)-1;
     }
     printf("Teste %d\n%d\n", teste,  cont);
     printf("\n");
     scanf("%d", &N);
     teste+=1;
     cont=0;
   }
     return 0;
   }
