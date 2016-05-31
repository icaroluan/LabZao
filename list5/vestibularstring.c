#include<stdio.h>
#include<string.h>
int main(){
int c, i, X, j;
char N[81], R[81];
    scanf("%d", &X);
    scanf("%s", N); 
    scanf("%s", R);
    c=0;
    for (i=0;i<X;i++){
        if(N[i]==R[i]){
           c++;
        }
    }
    printf("%d\n", c);
  
return 0;
}
