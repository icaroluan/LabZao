#include <stdio.h>

int main() {
	int i, x, y, h;
	scanf("%d", &x);
	int N[x+1];
	for(i=0;i<x;i++){
		scanf("%d", &N[i]);
	}
	for(i=0;i<x;i++){
		if((N[i]==1) || (N[i+1]==1) || (N[i-1]==1) ){
			N[i]=N[i]+1;
		}
		else if((N[i]==1) && (N[i-1]==1)){
			N[i]=N[i]+1;
		}
		else if((N[i]==1) && (N[i+1]==1)){
			N[i]=N[i]+1;
		}
		else if((N[i]==0) && (N[i+1]==1) && (N[i-1]==1)){
			N[i]=N[i]+1;
		}
		printf("%d\n", N[i]);
	}
	return 0;
}

/*

#include <stdio.h>

int main() {
	int i, x;
	scanf("%d", &x);
	int N[x+1], A[x+1];
	for(i=0;i<x;i++){
		scanf("%d", &N[i]);
	}
	for(i=0;i<x;i++){
		A[i]=0;
	}
	for(i=0;i<x;i++){
		if(N[i+1]==1 || N[i]==1 || N[i-1]==1){
			A[i]=A[i]+1;
		}
		if(N[i-1]==1 && N[i]==1){
			A[i]=A[i]+1;
		}
		if(N[i+1]==1 && N[i]==1){
			A[i]=A[i]+1;
		}
		if(N[i]==0 && N[i+1]==1 && N[i-1]==1){
			A[i]=A[i]+1;
		}
		printf("%d\n", A[i]);
		
	}
	return 0;
}
} */

Program campo;
var
i,n :integer;
v,aux:array[0..50] of integer;


begin
	readln(n);
		for i:=1 to n do
			begin
				readln(v[i]);
		  end;
		for i:=1 to n do
			begin
				if (v[i]=1) or (v[i+1] = 1) or (v[i-1] = 1) then
					begin
						aux[i]:= aux[i] + 1;
					end;
				if (v[i]= 1) and (v[i-1] =1) then
					begin
						aux[i]:= aux[i] + 1;
					end;
				if (v[i+1]=1) and (v[i]=1) then
					begin
						aux[i]:=aux[i]+1;
					end;
				if (v[i]=0) and (v[i+1] = 1) and (v[i-1] = 1)then
					 begin
						aux[i]:=aux[i]+1;
					end;
				writeln(aux[i]);
			end;
		
						
					
end.
