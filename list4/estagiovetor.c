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
      for(j = 1; j < n; j++){
         if (alunosmed[i] == alunosmed[j])
            indicemelhor = j;
		}
	printf("Turma %d\n%d\n\n", turma++, alunoscod[indicemelhor]);		
			
      scanf("%d", &n);
    }
  return 0;
}
