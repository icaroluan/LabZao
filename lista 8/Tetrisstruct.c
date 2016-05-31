#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Size Defines
#define MAX_NUM_PARTIDAS 12
#define MAX_STRING_SIZE  20

typedef struct{
    int  soma;
    int  nivel;
    char nome[MAX_STRING_SIZE];
}Partidas;

int main(){
    int n, i, j, x, testeN, partida, maior, menor;
    Partidas tetris[1000], aux_tetris;

    for(testeN = 1; ;testeN++, printf("\n")){
        scanf("%d", &n);

        if(n == 0)
            break;

        for (i = 0; i < n; i++){
            scanf("%s", tetris[i].nome);

            for(j = 0, maior = 0, menor = 1001, tetris[i].soma = 0; j < MAX_NUM_PARTIDAS; j++){
                scanf("%d", &partida);
                tetris[i].soma += partida;
                if(partida < menor)
                    menor = partida;
                if(partida > maior)
                    maior = partida;
            }
            
            tetris[i].soma -= (menor + maior);
        }

        for (i = 1; i < n; i++){
            for (j = i-1, aux_tetris = tetris[i]; (j >= 0) && (aux_tetris.soma > tetris[j].soma) ; j--)
                tetris[j+1] = tetris[j];
            for(;(j >= 0) && (strcmp(aux_tetris.nome, tetris[j].nome) < 0) && (aux_tetris.soma == tetris[j].soma);j--)
                tetris[j+1] = tetris[j];
                
            tetris[j+1] = aux_tetris;
        }

        printf("Teste %d\n", testeN);
        for (i = 0, x = 1; i < n; i = j+1, x = j+2){
            for(j = i;(j+1 != n) && (tetris[j+1].soma == tetris[j].soma);j++)
                printf("%d %d %s\n" , (x), tetris[j].soma, tetris[j].nome);
            printf("%d %d %s\n" , (x), tetris[j].soma, tetris[j].nome);
        }
    }

    return EXIT_SUCCESS;
    }
