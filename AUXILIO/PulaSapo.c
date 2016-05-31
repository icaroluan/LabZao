#include <stdio.h>
int main(){
int s, n, e, i, x, y;
scanf("%d %d", &n, &s);
int P[n];
for (e=0; e < n; e++){
	P[e]= 0;
	}
for (e=0; e < s; e++){
	scanf("%d %d", &x, &y);
	for (i=x-1; i < n; i+=y)
		P[i] = 1;
	for (i=x-1; i >= 0;i-=y)
		P[i] = 1;
	}
for (e=0; e < n; e++)
	printf("%d\n", P[e]);
return 0;
}
