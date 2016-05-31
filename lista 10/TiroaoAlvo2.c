#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_ALVOS 	100001
#define MAX_TIROS 	100001

int  alvos_raios[MAX_ALVOS] = {0};

int main(){
	int i, j, T, C, x, y, soma;

	soma = 0;
	scanf(" %d %d", &C, &T);

	for(i = C - 1; i >= 0; i--)
		scanf(" %d", &alvos_raios[i]);

	for(i = 0; i < T; i++){
		float raio;
		scanf(" %d %d", &x, &y);

		raio = sqrt(((x * x) + (y * y)));

		if(raio == 0) j = C;
		else for(j = 0; (j < C) && (raio <= alvos_raios[j]); j++);

		soma += j;
	}

	printf("%d\n", soma);

	return EXIT_SUCCESS;
}
