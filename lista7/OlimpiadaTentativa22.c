#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 120

typedef struct{
	int cont;
	int O;
	int P;
	int B;
} Paises; // Não confunda STRUCT, com TIPO, TIPO é um STRUCT com forma
// se não for isso vc teria que usar "struct nome_struct nome_variavel;"
// Como isso agora é um tipo você só irá fazer "Paises nome_variavel;

// O tipo bool em stdbool é _Bool
// O qsort usa int
int PaisesCl(const void* x1, const void* x2){
	Paises *p1 = (Paises *) x1;
    Paises *p2 = (Paises *) x2;

    if(p1->O > p2->O){
		return 1;
	}
	else if(p2->O > p1->O){
		return -1;
	}
	if(p1->P > p2->P){
		return 1;
	}
	else if(p2->P > p1->P){
		return -1;
	}
	if(p1->B > p2->B){
		return 1;
    }
	else if(p2->B > p1->B){
		return -1;
    }

    // SE CHEGOU AQUI É PORQUE TUDO ACIMA É IGUAL
    return (p2->cont > p1->cont) ? 1 : -1; // NUNCA O CONTADOR VAI SER IGUAL ;)
}

Paises pais[MAX];

int main(){
	int Ouro, Prata, Bronze , N, M, i, j, h;
	scanf("%d %d", &N, &M);
	for(i=0;i<N;i++){
		pais[i].cont=i+1;
		pais[i].O=0;
		pais[i].P=0;
		pais[i].B=0;
	}
	for(j=0;j<M;j++){
		scanf("%d %d %d", &Ouro, &Prata, &Bronze);
		pais[Ouro   - 1].O+=1;
		pais[Prata  - 1].P+=1;
		pais[Bronze - 1].B+=1;
	}
	qsort(pais, (sizeof(*pais) * N - 1), sizeof(*pais), PaisesCl);
	for(h = 0; h < N - 1; h++){
		printf("%d ", pais[h].cont);
	}
    printf("%d\n", pais[N-1].cont);

    return 0;
}
