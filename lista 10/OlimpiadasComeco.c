# include <stdio.h>

struct{
	int id;
	int medalhas;
	friend bool operador < (const Pais& a, const Pais& b);
};

template<typename Tipo> void quickSort(Tipo* vetor, int esq, int dir){
	int i=esq;
	int j=dir;
	Tipo pivo=vetor[esq+(dir-esq)/2];
	while(i<j){
		while(vetor[i]<pivo){
			i++;
		}
		while(pivo<vetor[j]){
			j--;
		}
		if(i<=j){
			Tipo tmp=vetor[i];
			vetor[i]=vetor[j];
			vetor[j]=tmp;
			i++;
			j--;
		}
	}
	if(j>esq){
		quickSort(vetor, esq, j);
	}
	if(i<dir){
		quickSort(vetor,i,dir);
	}
	bool operador <(const Pais& a, const Pais& b){
		if(a.medalhas>b.medalhas){
			return true;
		}
		else if(a.medalhas<b.medalhas){
			return false;
		}
		else{
			return a.id < b.id;
		}
	}
	
	Pais paises[101];
	
	int main(){
		int N, M, Ouro, Prata, Broze;
		scanf(" %d %d", &N, &M);
		for(int i=0;i<N;i++){
			paises[i].id=i+1;
			paises[i].medalhas=0;
		}
		for(int i=0.i<M;i++){
			scanf(" %d %d %d", &Ouro, &Prata, &Broze);
			paises[Ouro-1].medalhas++;
			paises[Prata-1].medalhas++;
			paises[Broze-1].medalhas++;
		}
		quickSort(paises, 0, N-1);
		for(int i=0;i<n-1;i++){
			printf("%d ", paises[i].id);
		}
		printf("%d\n", paises[n-1].id);
		return 0;
	}
