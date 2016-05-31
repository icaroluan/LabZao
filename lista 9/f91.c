#include<stdio.h>
int f91(int N, int final ){
	scanf("%d", &N);
	while(N !=0){
		if(N <= 100){
			final=91;
		}
		else if (N>= 101){
			final= N -10;
		}
		printf("f91(%d) = %d\n",N, final);
		scanf("%d", &N);
		  
	}
}
int main(){
	int N, final;
	f91(N,final);
	return 0;
}
