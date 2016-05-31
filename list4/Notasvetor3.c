#include<stdio.h>
int main(){
int N, i, j, c;
   scanf("%d", &N);
   int v[N], cont[N];
   for(i=0;i<N;i++){
   	  scanf("%d", &v[i]);
   }
   for(i=0;i<N;i++){
    	for(j=0,cont[i]=0;j<N;j++){
	       if(v[i]==v[j]){
	    	  cont[i]++;
	       }
		}
    }
    for(i=0,c=0;i<N;i++){
    	if(cont[c]<cont[i]){
    		c=i;
		}
		if(cont[c]==cont[i]){
			if(v[c]<v[i]){
			   c=i;
		    }
		}
	}
	printf("%d\n", v[c]);
return 0;
}
