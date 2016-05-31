#include <stdio.h>
#include <stdlib.h>
 
 
 
int main(){
    int i, h, j, X, Y, L, C, N, contA=0, contP=0;
    scanf("%d", &N);
    int **m= (int**)malloc(2500 * (sizeof(int*)));
    for(i=0;i<2500;i++){
    	m[i]=(int*)malloc(2500 * (sizeof(int*)));
    	for(h=0;h<2500;h++){
    		m[i][h]=0;
    	}
    }
    while(N!=0){
            
    	for(j=0;j<N;j++){
     		scanf("%d %d %d %d", &X, &Y, &L, &C);
    		
    		for(i=C+Y;i>=Y+1;i--){
    			for(h=X+L;h>=X+1;h--){
    				m[i][h]=1;
 
    			}
    		}
        }
		for(i=1;i<2500;i++){
			for(h=1;h<2500;h++){
				if(m[i][h]==1){
					contA++;
    				if(m[i-1][h]!=1){
    					contP++;
    				}
    				if( m[i+1][h]!=1){
    					contP++;
    				}
    				if(m[i][h-1]!=1){
    					contP++;
    				}
    				if(m[i][h+1]!=1){
    					contP++;
    				}
                }
			}
		}
 
    	printf("%d %d\n",contA, contP);
    	contA=0;
    	contP=0;
    	for(i=0;i<2500;i++){
        	for(h=0;h<2500;h++){
        		m[i][h]=0;
        	}
        }
    	scanf("%d\n", &N);
	}
	return 0;
}

