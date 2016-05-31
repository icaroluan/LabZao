#include <stdio.h>

int main(){
int N, C, i,S=0, T;
scanf("%d\n", &N);
for(i=0;i<N;i++){
	scanf("%d", &C);
	S+=C;
	
}
scanf("%d", &T);
if(T==S){
	printf("Acertou\n");
}
else if(T!=S){
	printf("Errou\n");
}
return 0;
}
