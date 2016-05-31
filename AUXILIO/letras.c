#include <stdio.h>

int main() {
	int a,b,c,d,e,f;
	char s1[10],s2[1000];
	c=0;
	e=0;
	f=0;
	gets(s1);
	gets(s2);
	a=strlen(s2);
	a=a+1;
	s2[a]=' ';

	for (b=0;b<a+1;b++){
		if (s2[b]==' '){
			c++;
		}
	}
	for (b=0;b<a+1;b++){
	if (s2[b]==s1[f]){
		d++;
		
			
	}	
	else if ((s2[b]==' ') & (d>0)){
		d=0;
		e++;
		
	}
	
	}
	


	float g=e*100;
	g=g/c;
	printf("%.1f\n",g);
	

	return 0;
}