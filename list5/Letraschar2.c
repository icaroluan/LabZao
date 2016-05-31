#include<stdio.h>
#include<string.h>
int main(){
	char l[1], T[1001];
	int x, i, j, p,vj;
	float tam;
    scanf("%c", &l[0]);
    scanf("%*[^\n]"); scanf("%*c");
	scanf("%[A-Z a-z]",T);
	x=strlen(T);
	p=0;
	j=0;
	vj=0;
	for(i=0;i<x;i++){
		if(T[i]==l[0]){
			j=1;
		}	
		if(T[i]==' ' || i==x-1){
			p++;
			vj+=j;
			j=0;
		}
	}
	tam=(vj*100.0)/p;
	printf("%.1f\n", tam);
	
return 0;	
}
