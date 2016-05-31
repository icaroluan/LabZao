#include<stdio.h>
int main(){
int N, a, b, i, j;
scanf("%d", &N);
 int v[N][N],v2[N][N],v3[N][N];
 for(i=0;i<N;i++){
     for(j=0;j<N;j++)
     scanf("%d", &v[i][j]);
}
for(i=0;i<N;i++){
     for(j=0;j<N;j++)
     scanf("%d", &v2[i][j]);
}
for(i=0;i<N;i++){
     for(j=0;j<N;j++){
	v3[i][j]=v2[i][j]+v[i][j];     
     printf("%d ", v3[i][j]);

}
printf("\n");
}


return 0;
}
  
 
 

