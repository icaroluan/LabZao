#include <stdio.h>
int main(){
	int N, i, j, x, ci;
	scanf("%d", &N);
	int LC[8][8];
	ci=0;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++)
		LC[i][j]='0';
	}
	LC[1][3] = '1';
    LC[2][3] = '1';
    LC[2][5] = '1';
    LC[5][4] = '1';
    for(i=0;i<N;i++){
		scanf("%d", &x);
		if(LC[i][j]=='1'){
		    break;
		}
        if(x==1){
           if(LC[i][j]=='0'){
               i=i+1;
               j=j+2;
               ci++;
           }
		}  
        if(x==2){
           if(LC[i][j]=='0'){
               i=i+2;
               j=j+1;
               ci++;
            }  
        }
        if(x==3){
           if(LC[i][j]=='0'){
        	  i=i+2;
        	  j=j-1;
        	  ci++;
           }
        }
        if(x==4){
           if(LC[i][j]=='0'){
               	i=i+1;
            	j=j-2;
            	ci++;
           }
        }
        if(x==5){
           if(LC[i][j]=='0'){
        	   i=i-1;
        	   j=j-2;
        	   ci++;
           }
        }
        if(x==6){
           if(LC[i][j]=='0'){
        	   i=i-2;
        	   j=j-1;
        	   ci++;
           }   
        }
        if(x==7){
           if(LC[i][j]=='0'){
        	  i=i-2;
        	  j=j+1;
		      ci++;
		   }
        }
        if(x==8){
           if(LC[i][j]=='0'){
        	   i=i-1;
        	   j=j+2;
        	   ci++;
           }
        }
    }
     printf("%d", ci);
    return 0;
    }
	

