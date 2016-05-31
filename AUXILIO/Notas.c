#include <stdio.h>

int main(){
int n, e, i, a;
scanf("%d", &n);
int L[n], R[n];
for (e=0;e < n; e++) scanf ("%d", &L[e]);
for (e=0;e < n; e++){
	for (i=0, R[e]= 0;i < n; i++){
		if (L[e] == L[i]) R[e]++;
		}
	}
for (e=0, a = 0;e < n; e++){
	if (R[a] < R[e]) a = e;
	if (R[a] == R[e])
		if (L[a] < L[e]) a=e;
	
	}
printf("%d\n", L[a]);
return 0;
}
