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
       scanf("%d", &LC[i][j]); // coloca na matriz//
   }
   for(i=0;i<N;i++){        // conta linhas //
       for(j=0;j<M;j++)
       c1=c1+LC[i][j];  // acrescenta ao contador c1//
       printf("%d\n", c1);
       printf("%d\n", c2);
        if(c1>c2)       // compara os valores //
         c2=c1;         // substitui o valor c2 //
         c1=0;          // zera o c1 /
   }
   for(j=0;j<M;j++){       // conta colunas //
       for(i=0;i<N;i++)
       c3=c3+LC[i][j];  // acrescenta ao contador c3//
       printf("%d\n", c3);
       printf("%d\n", c4);
        if(c3>c4)       // compara os valores // 
         c4=c3;          // substitui o valor c4 //
         c3=0;           // zera o c3 //
   }
   printf("%d\n", c1);
   printf("%d\n", c2);
   printf("%d\n", c3);
   printf("%d\n", c4);
   if(c4>c2){
      printf("%d\n", c4);
   }
   else{
      printf("%d\n", c2);
   }
return 0;
}
