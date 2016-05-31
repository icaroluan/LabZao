#include <stdio.h>
int main(){
	int alunosmed[1000] , alunoscod[1000];	
	int i, indicemelhor, n, j, turma;
	turma=1;
	scanf("%d", &n);
	while (n > 0)
	{
	for (i = 0; i < n; i++){
         scanf("%d %d", &alunoscod[i], &alunosmed[i]);
         indicemelhor = 0;
		}
	for (i = 1; i < n; i++){
		if (alunosmed[i] > alunosmed[indicemelhor])
			indicemelhor = i;
		}
	printf("Turma %d\n", turma++);
	for (i = 0; i < n; i++){		
		if (alunosmed[i]==alunosmed[indicemelhor]){
			printf("%d ", alunoscod[i]);
			}
		}
	printf("\n\n");
	scanf("%d", &n);
	}
	return 0;
}
