#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a=0, b, e, i, c[4];
char m[1001];
int grau (int x){
	i++;
	int c[4];
	c[3] = x/1000, x%=1000, c[2] = x/100, x%=100, c[1] = x/10, c[0] = x%10;
	x = c[3] + c[2] + c[1] + c[0];
	if (c[3] == 0 && c[2] == 0 && c[1] == 0)
		return (x);
	else 
		return(grau(x));
}
int main (){
scanf("%s", m);
while(atoi(m) != 0){
	i = 0, a = 0;
	for (e = 0; m[e] != '\0'; e++){
		a+= (m[e] - 48);
		}
	if (a%9==0){
		grau(a);
		printf("%s is a multiple of 9 and has 9-degree %d.\n", m, i);
		}
	else
		printf("%s is not a multiple of 9.\n", m);
	scanf("%s", m);
	}
return 0;
}

