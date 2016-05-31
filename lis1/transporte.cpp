#include<stdio.h>
int main(){
	int A, B, C, X, Y, Z, carga;
	scanf("%d%d%d", &A, &B, &C);
	scanf("%d%d%d", &X, &Y, &Z);
	carga = (X / A) * (Y / B) * (Z / C);
	printf("%d\n", carga);
	return 0;
}
