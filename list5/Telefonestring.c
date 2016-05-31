#include<stdio.h>
#include<string.h>
int main(){
   char T[16];
   int i, j, AC;
   scanf("%s", T);
   AC=strlen(T);
   for(i=0;i<AC;i++){
      if(T[i]=='A' || T[i]=='B' || T[i]=='C'){
         T[i]='2';
      }
      if(T[i]=='D' || T[i]=='E' || T[i]=='F'){
         T[i]='3';
      }
      if(T[i]=='G' || T[i]=='H' || T[i]=='I'){
         T[i]='4';
      }
      if(T[i]=='J' || T[i]=='K' || T[i]=='L'){
         T[i]='5';
      }
      if(T[i]=='M' || T[i]=='N' || T[i]=='O'){
         T[i]='6';
      }
      if(T[i]=='P' || T[i]=='Q' || T[i]=='R' || T[i]== 'S'){
         T[i]='7';
      }
      if(T[i]=='T' || T[i]=='U' || T[i]=='V'){
         T[i]='8';
      }
      if(T[i]=='W' || T[i]=='X' || T[i]=='Y' || T[i]== 'Z'){
         T[i]='9';
      }
    }
      printf("%s", T);

return 0;
}
