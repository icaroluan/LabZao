#include <stdio.h>

int main(){
int n, m, e, i;
scanf("%d", &n);
int L[n];
for (e = 0; e < n; e++)
	scanf ("%d", &L[e]);
scanf("%d", &m);
int R[m];
for (e = 0; e < m; e++){
	scanf ("%d", &R[e]);
	for (i = 0; i < n; i++){
			if (R[e] == L[i])
				L[i] = 0;
		}
	}
for (e = 0; e < n; e++){
	if (L[e] != 0)
		printf("%d ", L[e]);
	}
printf("\n");
return 0;
}