#include<stdio.h>
int main(){
	int  i, j, k, l, V, teste;
	scanf("%d", &V);
	teste = 1;
	while (V!=0){
		printf("Teste %d\n", teste);
		for(i=0;V>=50;i+=1){
			V=V-50;
		}
		for(j=0;V>=10;j+=1){
		 	V=V-10;
		}
		for(k=0;V>=5;k+=1){
		   V=V-5;
		}
		for(l=0;V>=1;l+=1){
		    V=V-1;
		}
		    printf("%d %d %d %d\n", i, j, k, l);
		    
	printf("\n");    
	scanf("%d", &V);
	l = 0;
	k = 0;
	i = 0;
	j = 0;
	teste = teste + 1;
	}
	while (V == 0){
	    break;
    }
	
return 0;
}
