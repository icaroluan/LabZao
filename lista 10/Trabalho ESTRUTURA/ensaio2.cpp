#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/////////////////////////////////////////////////////////////////////
// Definição dos structs.
/////////////////////////////////////////////////////////////////////

typedef struct {
  // Identificador do vendedor. Número sequencial a partir de 1.
  int id;
  // Instante em que o vendedor estará disponível.
  int tempo;
} Vendedor;

typedef struct {
  int tamanho;
  Vendedor *itens;
} Heap;

int indiceFilhoEsq(int pos) {
  // TODO
  return (2*pos+1);
}

/**
 * Retorna o índice do filho à direita do item no índice pos.
 * Ex.: indiceFilhoEsq(3) retorna 8.
 */
int indiceFilhoDir(int pos) {
  // TODO
  return (2*pos+2);
}

Heap *criaHeapMin(int tamanho) {
  int i;
  Heap *heap = (Heap *)malloc(sizeof(Heap));
  heap->tamanho = tamanho;
  heap->itens = (Vendedor *)malloc(tamanho * sizeof(Vendedor));

  for (i = 0; i < tamanho; i++) {
    heap->itens[i].id = i + 1;
    heap->itens[i].tempo = 0;
  }

  return heap;
}

Vendedor *criaVendedor(int id, int tempo) {
  Vendedor *vendedor = (Vendedor *)malloc(sizeof(Vendedor));
  vendedor->id = id;
  vendedor->tempo = tempo;
  return vendedor;
}

int main(){
 
    Heap *heap = criaHeapMin(3);
    heap->itens[0] = *criaVendedor(1, 4);  
    heap->itens[1] = *criaVendedor(2, 4);
    heap->itens[2] = *criaVendedor(3, 5);
 
    return 0;
}
