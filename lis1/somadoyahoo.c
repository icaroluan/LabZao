#include<stdlib.h>
#include<conio.h>

int main()
{
// Soma de 1 a n, numeros inteiros
int n=-1, c, soma;
system("cls");
while(n<0)
{
printf("Informe o limite (numero inteiro e positivo): n = ");
scanf("%d", &n);
}
printf("\nSoma = ");
for(c=1, soma=0; c<=n; c++)
{
printf("%d ", c);
soma = soma + c;
if(c<n)
printf("+ ");
}
printf("= %d", soma);
printf("\nSoma = %d", soma);
getch();
return(0);
} 
