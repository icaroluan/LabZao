#include<stdio.h>
int main(){
	int N, M, i, j, ci;
	scanf("%d%d", &N, &M);
	char  LC[1001][1001];
	ci=0;
	for(i=0;i<=N;i+=1){
		for(j=0;j<=M;j+=1)
		scanf("%c", &LC[i][j]);
	}
	for(i=0;i<=N;i++){
		for(j=0;j<=M;j++)
		   if(LC[i][j]=='#')
		      if(LC[i+1][j]!=LC[i][j] || LC[i][j+1]!=LC[i][j] || LC[i-1][j]!=LC[i][j] || LC[i][j-1]!=LC[i][j])
		      ci++;
	}
    printf("%d", ci);

return 0;
}
