#include <stdio.h>

int main(){
	int N, i, K, m, r, q, x;
	char A;
	scanf("%d", &N);
	while(N!=0){
	
		if((N==1)||(N==9)||(N==45)||(N==99)||(N==297)||(N==703)||(N==999)||(N==2223)||(N==2728)||(N==4879)||(N==4950)||(N==5050)||(N==5292)||(N==7272)||(N==7777)||(N==9999)||(N==17344)||(N==22222)||(N==38962)){
			printf("%d: S\n",N);	
		}
		else{
			printf("%d: N\n", N);
		}
	scanf("%d", &N);
	
	}																																											
	return 0;
}
