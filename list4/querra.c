#include<stdio.h>
int main(){
int V[100000];
int N, k, i, j, c, m;
c = 0;
   scanf("%d\n", &N);
   for (i=0;i<N;i+=1){
       scanf("%d", &V[i]);
       k = k + V[i];
   }
   m = (k/2);
   k = 0;
   for (j=0;j<N;j+=1){
        k = k + V[j];
        c++;
        if(k == m){
           printf("%d\n", c);
        }
   }
       
return 0;
}    




