#include<stdio.h>
int main(){
int vetor[1000];	
int n,h,j,i,x,y,z;
scanf("%d\n",&n);
for(i=0;i<n;i++){
	scanf("%d\n",&vetor[i]);
}
x=0;
z=0;	
while(x<n){
	y=0;
	for(j=0;j<n;j++){
		if(vetor[x]==vetor[j]){
			y++;
		}
	}
	if(y>z){
		z=y;
		h=vetor[x];
	}
	if(y==z){
		if(h<vetor[x]){
			h=vetor[x];
		}
	}
	x++;
	
}
printf("%d\n",h);




return 0;
}
