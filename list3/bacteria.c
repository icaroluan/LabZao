#include <stdio.h>
#include <math.h>

int main(){
	int N, i, C, D, h, escolhido=0;
	long long int certo=0;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%d%d", &D, &C);
			if(certo < C*log(D)){
				/*log(C^D)==C*log(D);*/
				certo=C*log(D);
				escolhido=i;
			}
		
	}
	printf("%d\n", escolhido);
	return 0;
	
}

/*
#include <stdio.h>
#include <math.h>

int main() {
  int N, D, C, res, i;
  double bact = 0.0;

  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%d%d", &D, &C);
    /* se A > B então log(A) > log(B) */
/*    if (bact < (double)C*log(D)) {
      /* log(C^D) == C*log(D) */
 /*     bact = C*log(D);
      res = i;
    }
  }
  
  printf("%d\n", res);

  return 0;
}*/


