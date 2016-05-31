#include<stdio.h>
int main(){
	int  c, V, I, J, K, L, teste, div;
	scanf("%d", &V);
	c = 0;
	I = 0;
	J = 0;
	K = 0;
	L = 0;
	teste = 1;
	div = 0;
	while (V!=0){
		printf("Teste %d\n", teste);
		while(c <= V){
			while (V > I){
				V = V - 50;
				I = I + 1;
			}
                while (V > K){
            	   V = V - 10;
            	   J = J + 1;
			    }
                   while (V > J ){
            	      V = V - 5;
            	      K = K + 1;
			       }
			        while  (V > J){
				       V = V - 1;
				       L = L + 1;
			        }	
		    c = c +1;
		    printf("%d %d %d %d\n", L, K, J, I);
		    
	    }
	printf("\n");    
	scanf("%d", &V);
	c = 0;
	L = 0;
	K = 0;
	I = 0;
	J = 0;
	teste = teste + 1;
	}
	while (V == 0){
	    break;
    }
	
return 0;
}
