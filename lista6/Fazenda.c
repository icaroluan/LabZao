#include <stdio.h>
 
 
 
int main(){
    int i, h, j, X, Y, L, C, N, contA=0, contP=0;
 
    scanf("%d", &N);

    int matriz[1500][1500];
    for(i=0;i<1500;i++){
    	for(h=0;h<1500;h++){
    		matriz[i][h]=0;
    	}
    }
    while(N!=0){
            
    	for(j=0;j<N;j++){
     		scanf("%d %d %d %d", &X, &Y, &L, &C);
    		
    		for(i=X+1;i<=L+X;i++){
    			for(h=Y+1;h<=C+Y;h++){
    				matriz[i][h]=1;
 
    			}
    		}
        }
		for(i=0;i<11;i++){
			for(h=0;h<11;h++){
				printf(" %d", matriz[i][h]);
				if(matriz[i][h]==1){
					contA++;
    				if(matriz[i-1][h]!=1){
    					contP++;
    				}
    				if( matriz[i+1][h]!=1){
    					contP++;
    				}
    				if(matriz[i][h-1]!=1){
    					contP++;
    				}
    				if(matriz[i][h+1]!=1){
    					contP++;
    				}
                }
			}
			printf("\n");
		}
 
    	printf("%d %d\n",contA, contP);
    	contA=0;
    	contP=0;
    	for(i=0;i<=1500;i++){
        	for(h=0;h<=1500;h++){
        		matriz[i][h]=0;
        	}
        }
    	scanf("%d\n", &N);
	}
	return 0;
}


#include <stdio.h>

int main(){
	int i, h, j, X, Y, L, C, N, contA=0, contP=0;
	scanf("%d", &N);
	int matriz[1500]1500];
	for(i=0;i<22;i++){
		for(h=0;h<7;h++){
			matriz[i][h]=0;
		}
	}
	while(N!=0){
		for(j=0;j<N;j++){
			scanf("%d %d %d %d", &X, &Y, &L, &C);
		}
		for(i=X+1;i>L+1;i++){
			for(h=Y+1;h>C+1;h++){
				matriz[i][h]=1;
				
			}
		}
		
		for(i=0;i<22;i++){
			for(h=0;h<7;h++){
				printf(" %d", matriz[i][h]);
				if(matriz[i][h]==1){
					contA++;
				}
				if(matriz[i-1][h]==0 && matriz[i][h]==1){
					contP++;
				}
				if( matriz[i+1][h]==0 && matriz[i][h]==1){
					contP++;
				}
				if(matriz[i][h-1]==0 && matriz[i][h]==1){
					contP++;
				}
				if(matriz[i][h+1]==0 && matriz[i][h]==1){
					contP++;
				}
				if(matriz[i+1][h+1]==0 && matriz[i][h]==1){
					contP++;
				}
				if(matriz[i-1][h-1]==0 && matriz[i][h]==1){
					contP++;
				}
			}
				printf("\n");
		}

	printf("%d %d\n",contA, contP);
	contA=0;
	contP=0;
	scanf("%d\n", &N);
	}
	return 0;
}

/*for(i=X+1;i+1<=L+1;i++){
		for(j=Y+1;j<=C+1;j++){
			matriz[i][j] = 1;
		}
	
	}*/


#include <stdio.h>
#include <stdlib.h>
 
 
 
int main(){
    int i, h, j, X, Y, L, C, N, contA=0, contP=0;
    scanf("%d", &N);
    int **m= (int**)malloc(1500 * (sizeof(int*)));
    for(i=0;i<1500;i++){
    	m[i]=(int*)malloc(1500 * (sizeof(int*)));
    	for(h=0;h<1500;h++){
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
		for(i=0;i<1500;i++){
			for(h=0;h<1500;h++){
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
    	for(i=0;i<1500;i++){
        	for(h=0;h<1500;h++){
        		m[i][h]=0;
        	}
        }
    	scanf("%d\n", &N);
	}
	return 0;
}


