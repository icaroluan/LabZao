#include <stdio.h>
int main(){
	int N, M, i=4, j=3, h, LC[8][8], ci;
	scanf("%d", &N);
	ci=0;
	for(h=0;h<N;h++){
		scanf("%d", &M);
		if((i==1 && j==3)|| (i==2 && j==3) || (i==2 && j==5) || (i==5 && j==4)){
			printf("ENTRO\n")
		     break;
	    }
	    switch(M){
	    	case 1:
	    	   i+=1;
	    	   j+=2;
	    	   ci++;
	    	   break;
	    	case 2:
	    		i+=2;
	    		j+=1;
	    		ci++;
	    		break;
	    	case 3:
			    i+=2;
				j-=1;
				ci++;
				break;
			case 4:
			    i+=1;
				j-=2;
				ci++;
				break;
			case 5:
			    i-=1;
				j-=2;
				ci++;
				break;
			case 6:
			    i-=2;
				j-=1;
				ci++;
				break;
			case 7:
				i-=2;
				j+=1;
				ci++;
				break;
			case 8:
			    i-=1;
				j+=2;
				ci++;
				break;	
								
		}
	}
	printf("%d", ci);
	return 0;	
}
