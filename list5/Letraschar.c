#include<stdio.h>
#include<string.h>
int main(){
	char l[1], T[1001];
	int x, i, j, p;
	float tam;
    scanf("%c", &l[0]);
    scanf("%*[^\n]"); scanf("%*c");
	scanf("%[A-Z a-z]", T);
	x=strlen(T);
	p=0;
	j=0;
	for(i=0;i<x;i++){
		if(T[i]==' '){
			p++;
			
		}
	}
	for(i=0;i<x;i++){
		if(T[i]==l[0]){
			j++;
		}
	}
	for(i=0;i<x;i++){
		if(T[i]==' ' && T[i]==l[0]){
			j++;
		}
		
	}
	tam=(j*100)/p;
	printf("%d\n", p);
	printf("%d\n", x);
	printf("%d\n", i);
	printf("%d\n", j);
	printf("%.1f\n", tam);
	
return 0;	
}
