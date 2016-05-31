#include<stdio.h>
int main(){
	int a, N, soma, c;
	scanf("%d", &a);
	c = 1;
	soma = 0;
	while (c <= a){
		scanf("%d", &N);
		soma = soma + N;
		c = c +1;
	}
	printf("%d\n", soma);
return 0;
}

