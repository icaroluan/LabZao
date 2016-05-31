#include<stdio.h>
#include<string.h>
int main(){
	char VP[10001];
	int x ,i,j;
//	scanf("[^\n]%s", VP); //
	scanf("%[A-Z a-z]", VP);
	x=strlen(VP); 
	for(j=0;j<x;j++){
		if(VP[j]=='p' && VP[j+1]=='p'){
			VP[j]='0';
	    }
	}
	for(i=0;i<x;i++){
	   if(VP[i]!='0'){
	    	printf("%c", VP[i]);
		}
	}
	
	
return 0;	
}
