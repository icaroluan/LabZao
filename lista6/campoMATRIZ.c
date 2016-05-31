#include<stdio.h>
int main(){
int N, M, i, j, c1, c2, c3, c4;
   scanf("%d%d", &N, &M);
   int LC[N][M];
   c1=0;
   c2=0;
   c3=0;
   c4=0;
   for(i=0;i<N;i++){
       for(j=0;j<M;j++)
       scanf("%d", &LC[i][j]); 
   }
   for(i=0;i<N;i++){        
       for(j=0;j<M;j++)
       c1=c1+LC[i][j];  
        if(c1>c2)       
         c2=c1;        
         c1=0;          
   }
   for(j=0;j<M;j++){       
       for(i=0;i<N;i++)
       c3=c3+LC[i][j];  
        if(c3>c4)        
         c4=c3;         
         c3=0;           
   }
   if(c4>c2){
      printf("%d\n", c4);
   }
   else{
      printf("%d\n", c2);
   }
return 0;
}
