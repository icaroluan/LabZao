#include<stdio.h>
#include <string.h>
int main(){
char N[1000];
char l[1];
int c,i,x,y;
float porcento,espaco,cont;
espaco=1;
cont=0;
c=0;
x=0;
y=0;
scanf("%c",&l[0]);
scanf("%*[^\n]"); scanf("%*c");
scanf("%[^\n]s",N);
printf("%s\n",N);
printf("%d\n",strlen(N));
for(i=0;i<strlen(N);i++){
	if(N[i]==l[0]){
		c++;
	}

	if(N[i]==' '){
		espaco++;
		if(c>0){
			cont++;
			c=0;
			x=1;
			y=2;
		}
		
	}
}
if(x==0 &&c>0){
	cont=1;
}
if(y==2 && c>0 ){
	cont++;
}
printf("%d\n",cont);
printf("%d\n",c);
printf("%d\n",espaco);
printf("%d\n",x);
porcento=(100*cont)/(espaco);
printf("%.1f",porcento);
return 0;	
}	
