#include <stdio.h>
int main (){
int a, v, e, i, b, c, m, t=1;
scanf ("%d %d", &a, &v);
while(a != 0){
	int A[a];
	printf("Teste %d\n", t++);
	if (v == 0)
		printf("0\n");
	else {
		m=0;
		for (e=0; e < a; e++)
			A[e] = 0;
		for (e=0; e < v;e++){
			scanf("%d %d", &b, &c);
			A[b-1]++, A[c-1]++;
			}
		for (e=1; e < a; e++){
			if (A[e] > A[m])
				m = e;
				}
		for (e=0; e < a; e++)
			if (A[m] == A[e])
				printf("%d ", e+1);
		printf("\n");
		}
	scanf("%d %d", &a, &v);
	printf("\n");
	}
return 0;
}
