#include <stdio.h>

int main(){
	long long int L, N, C, F;
	scanf("%lli%lli", &L, &N);
	C=((L-(N-1)) * (L-(N-1)) );
	F=(C+(N-1));
	printf("%lli\n", F);
	return 0;
}
