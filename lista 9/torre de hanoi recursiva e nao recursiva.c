 #include <stdio.h>
#include <cstdlib>
#include <iostream>

void movetorre (int n, char orig, char dest, char aux){
   if (n==1) {printf("\nMover disco 1 da torre %c para a torre %c", orig, dest);
   return;}
  movetorre(n-1,orig,aux,dest);
  printf("\nMover disco %d da torre %c para a torre %c", n, orig, dest);
  movetorre(n-1,aux,dest,orig);
};

int main(){
   int discos;
   printf("Digite a quantidade de discos: ");
   scanf("%d",&discos);
   movetorre(discos,'A','C','B');
   printf("\n");
   system("PAUSE");
   return 0;
}


#include <stdio.h>
    #include <stdlib.h>
    
    void hanoi(int n, char a, char b, char c)
    {
    /* mova n discos do pino a para o pino b usando
       o pino c como intermediario                    */
      if (n == 1)
        printf("mova disco %d de %c para %c\n", n, a, b);
     else
    {
       hanoi(n - 1, a, c, b);                            // H1
       printf("mova disco %d de %c para %c\n", n, a, b);
       hanoi(n - 1, c, b, a);                            // H2
     }
   }
   
   int main(void)
   {
     int numDiscos;
     scanf("%d", &numDiscos);
     hanoi(numDiscos, 'A', 'B', 'C');
     return 0;
   }
   
   #include <stdio.h>
#include <math.h>

int main(){
	int iDiscos, iTeste=1;
	while(scanf("%d",&iDiscos), iDiscos>0) printf("\nTeste %d\n%d\n", iTeste++, (int) pow(2,iDiscos)-1);
	return 0;
}
