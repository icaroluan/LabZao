#include <stdio.h>

int xadrez(int linha, int coluna, int count){
	int entrada , N, i, matriz[8][8];
	
	scanf("%d", &entrada);
	
	for (i = 0 ; i < entrada ; i++){
		scanf("%d",&N);
		if((linha==1 && coluna==3) || (linha==2 && coluna==3) || (linha==2 && coluna==5) || (linha==5 && coluna==4)){
			break;
		}
		switch(N){
			
			case 1:
				linha = linha + 1;
				coluna = coluna + 2;
				count++;
				break;
			
			case 2:
				linha = linha + 2;
				coluna = coluna + 1;
				count++;
				break;
		
			case 3:
				linha = linha + 2;
				coluna = coluna - 1;
				count++;
				break;
		
			case 4:
				linha = linha + 1;
				coluna = coluna - 2;
				count++;
				break;
		
			case 5:
				linha = linha - 1;
				coluna = coluna - 2;
				count++;
				break;
		
			case 6:
				linha = linha - 2;
				coluna = coluna - 1;
				count++;
				break;
		
			case 7:
				linha = linha - 2;
				coluna = coluna + 1;
				count++;
				break;
		
			case 8:
				linha = linha - 1;
				coluna = coluna + 2;
				count++;
				break;
		}
		
	}
	return count;	
}

int main(){
	
	int linha = 4, coluna = 3, count = 0;
	printf("%d", xadrez(linha, coluna, count));
	
	return 0;
}
