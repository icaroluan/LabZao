#include<stdio.h>
int main(){
int Cv, Ce, Cs, Ct, Fv, Fe, Fs, Ft;
scanf("%d%d%d%d%d%d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
Ct = Cv * 3 + Ce * 1;
Ft = Fv * 3 + Fe * 1;
if (Ct > Ft){
 printf("C\n");}
else if (Ft > Ct){
 printf("F\n");}
else if ((Ct == Ft) && (Cs > Fs)){
 printf("C\n");}
else if ((Ct == Ft) && (Fs >Cs)){
 printf("F\n");}
else if ((Ct == Ft) && (Cs == Fs)){
 printf("=\n");}    
return 0;}
