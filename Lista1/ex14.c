#include <stdio.h>      
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  if(*(float*)a < *(float*)b){
    return -1;
  }else if(*(float*)a > *(float*)b){
    return 1;
  }else{
    return 0;
  }
}

int main ()
{
  int n; 
  scanf("%d", &n); //usuario determina a quantidade de vetores
  float *vet;
  vet = malloc(n*sizeof(float)); // aloca o vetor com n elementos na memoria
  for(int i = 0; i < n; i++){
    scanf("%f", &vet[i]); //o usuario digita os valores do vetor até preencher os n elementos
  }
  qsort (vet, n, sizeof(float), compare); //ordenação dos valores digitados pelo usuario com qsort()
  for(int i = 0; i<n; i++){
    printf ("%f ",vet[i]);
  }
  free(vet); //libera o espaço de memoria alocado para o vetor
  return 0;
}