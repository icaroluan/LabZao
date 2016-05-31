#include <stdio.h>

int main(){
	int E, i, T=0;
	scanf("%d", &E);
	char v[E+1];
	for(i=0;i<E+1;i++){
		scanf("%c", &v[i]);
		if('A'==v[i]){
			T=T+1;
		}
		if('P' == v[i]){
			T=T+2;
		}
		if('C' == v[i]){
			T=T+2;
		}
		if('D'== v[i]){
			T=T+0;
		}
	}
	printf("%d", T);	

	return 0;
}
