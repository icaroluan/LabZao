// Ordenacao 

void selection_sort(int vet[], int N) 
  { 
    int i, j, min, aux;
    for (i = 0; i < (tam-1); i++) {
      min = i;
      for (j = (i+1); j < tam; j++) {
        if(num[j] < num[min]) 
          min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
   }
 }
 
 void quickSort(int valor[], int esquerda, int direita)
{
    int i, j, x, y;
    i = esquerda;
    j = direita;
    x = valor[(esquerda + direita) / 2];

    while(i <= j)
    {
        while(valor[i] < x && i < direita)
        {
            i++;
        }
        while(valor[j] > x && j > esquerda)
        {
            j--;
        }
        if(i <= j)
        {
            y = valor[i];
            valor[i] = valor[j];
            valor[j] = y;
            i++;
            j--;
        }
    }
    if(j > esquerda)
    {
        quickSort(valor, esquerda, j);
    }
    if(i < direita)
    {
        quickSort(valor,  i, direita);
    }
}



// pivor 

//Código para Ordenar um vetor de 10 inteiros.
#include<stdio.h>
#include<stdlib.h>
#define TAM 10

void quick(int vet[], int esq, int dir){
    int pivo = esq,i,ch,j;
    for(i=esq+1;i<=dir;i++){
        j = i;
        if(vet[j] < vet[pivo]){
         ch = vet[j];
         while(j > pivo){    
            vet[j] = vet[j-1];
            j--;
         }
         vet[j] = ch;
         pivo++;        
        }  
    }
    if(pivo-1 >= esq){
        quick(vet,esq,pivo-1);
    }
    if(pivo+1 <= dir){
        quick(vet,pivo+1,dir);
    }
 }

int main(){
    int vet[TAM],i;
    
    for(i=0;i<TAM;i++)
        scanf("%d",&vet[i]);
        
    quick(vet,0,TAM-1);
    
    for(i=0;i<TAM;i++)
        printf("%d ",vet[i]);    
    printf("\n");
    return 0;
}

// swap

void swap(int *a, int i, int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

int partition(int *a, int left,int right,int pivot)
{
    int pos, i;
    swap(a, pivot, right);
    pos = left;
    for(i = left; i < right; i++)
    {
        if (a[i] < a[right])
        {
            swap(a, i, pos);
            pos++;
        }
    }
    swap(a, right, pos);
    return pos;
}

void quick(int *a, int left, int right)
{
    if (left < right)
    {
        int pivot = (left + right) / 2;
 int pos = partition(a,left,right,pivot);
 quick(a, left, pos - 1);
 quick(a, pos + 1, right);
    }
}

// fat pivot

void sort(int array[], int begin, int end)
{
    int pivot = array[begin];
    int i = begin + 1, j = end, k = end;
    int t;

    while (i < j)
    {
        if (array[i] < pivot)
            i++;
        else if (array[i] > pivot)
        {
            j--;
            k--;
            t = array[i];
            array[i] = array[j];
            array[j] = array[k];
            array[k] = t;
        }
        else
        {
            j--;
            swap(array[i], array[j]);
        }
    }
    i--;
    swap(array[begin], array[i]);
    if (i - begin > 1)
        sort(array, begin, i);
    if (end - k   > 1)
        sort(array, k, end);
}

// recursiva chamada com 0

void ordenar_quicksort_nome(int ini, int fim, char vetor[][50])
{
    int i = ini, f = fim;
    char pivo[50], aux_char[50];
    strcpy(pivo, vetor[(ini + fim) / 2]);
    if (i <= f)
    {
        while (strcasecmp(vetor[i], pivo)<0)
            i++;
        while (strcasecmp(vetor[f], pivo)>0)
            f--;
        if (i <= f)
        {
            strcpy (aux_char, vetor[i]);
            strcpy (vetor[i], vetor[f]);
            strcpy (vetor[f], aux_char);
            i++;
            f--;
        }
    }
    if (f > ini)
        ordenar_quicksort_nome(ini, f, vetor);
    if (i < fim)
        ordenar_quicksort_nome(i, fim, vetor);
}

