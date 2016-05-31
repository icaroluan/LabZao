#include <stdio.h>

int main(){
	int X, Y, L, L2, H, H2;
	scanf("%d%d", &X, &Y);
	scanf("%d%d", &L, &H);
	scanf("%d%d", &L2, &H2);
	
	if((X>=L+L2) && (Y>=H && Y>=H2)){
		printf("S\n");
	}
	else if((X>=L+H2) && (Y>=H && Y>=L2)){
		printf("S\n");
	}
	else if((X>=H+L2) && (Y>=L && Y>=H2)){
		printf("S\n");
	}
	else if((X>=H+H2) && (Y>=L && Y>=L2)){
		printf("S\n");
	}
	else if((Y>=L+L2) && (X>=H && X>=H2)){
		printf("S\n");
	}
	else if((Y>=L+H2) && (X>=H && X>=L2)){
		printf("S\n");
	}
	else if((Y>=H+L2) && (X>=L && X>=H2)){
		printf("S\n");
	}
	else if((Y>=H+H2) && (X>=L && X>=L2)){
		printf("S\n");
	}
	else{
		printf("N\n");
	}
	return 0;
}
