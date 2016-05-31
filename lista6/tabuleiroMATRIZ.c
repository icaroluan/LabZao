#include <stdio.h>
int main(){
	int N, M, i, j, x, k, ci, p;
	scanf("%d", &N);
	int LC[8][8];
	ci=0;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++)
		p=LC[4][3];
	}
	for(i=0;i<N;i++){
		scanf("%d", &x);
        if(x==1){
          p+=LC[i+1][j+2];
          ci++;
          break;
        }
        if(x==2){
          p+=LC[i+2][j+1];
          ci++;
          break;
        }
        if(x==3){
        	p+=LC[i+2][j-1];
        	ci++;
        	break;
        }
        if(x==4){
        	p+=LC[i+1][j-2];
        	ci++;
        	break;
        }
        if(x==5){
        	p+=LC[i-1][j-2];
        	ci++;
        	break;
        }
        if(x==6){
        	p+=LC[i-2][j-1];
        	ci++;
        	break;
        }
        if(x==7){
        	p+=LC[i-2][j+1];
        	ci++;
        	break;
        }
        if(x==8){
        	p+=LC[i-1][j+2];
        	ci++;
        	break;
        }
	    if(p==LC[1][3] || p==LC[2][3] || p==LC[2][5] || p==LC[5][4]){
		     break;
	    }
	    
	 }
	   printf("%d", ci);
	return 0;
}


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
        if(x==1){
           if((i>=0 && i<=7) && (j>=0 && j<=7) && LC[i][j]=='0'){
               i=i+1;
               j=j+2;
               ci++;
           }
		}  
        if(x==2){
           if((i>=0 && i<=7) && (j>=0 && j<=7) && LC[i][j]=='0'){
               i=i+2;
               j=j+1;
               ci++;
            }  
        }
        if(x==3){
           if((i>=0 && i<=7) && (j>=0 && j<=7) && LC[i][j]=='0'){
        	  i=i+2;
        	  j=j-1;
        	  ci++;
           }
        }
        if(x==4){
           if((i>=0 && i<=7) && (j>=0 && j<=7) && LC[i][j]=='0'){
               	i=i+1;
            	j=j-2;
            	ci++;
           }
        }
        if(x==5){
           if((i>=0 && i<=7) && (j>=0 && j<=7) && LC[i][j]=='0'){
        	   i=i-1;
        	   j=j-2;
        	   ci++;
           }
        }
        if(x==6){
           if((i>=0 && i<=7) && (j>=0 && j<=7) && LC[i][j]=='0'){
        	   i=i-2;
        	   j=j-1;
        	   ci++;
           }   
        }
        if(x==7){
           if((i>=0 && i<=7) && (j>=0 && j<=7) && LC[i][j]=='0'){
        	  i=i-2;
        	  j=j+1;
		      ci++;
		   }
        }
        if(x==8){
           if((i>=0 && i<=7) && (j>=0 && j<=7) && LC[i][j]=='0'){
        	   i=i-1;
        	   j=j+2;
        	   ci++;
           }
        }
    }
     printf("%d", ci);
    return 0;
    }
	

