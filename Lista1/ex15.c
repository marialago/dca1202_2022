#include <stdio.h>      
#include <stdlib.h>

int compare (float x, float y){
  if(x < y){
    return -1;
  }else if(x > y){
    return 1;
  }else{
    return 0;
  }
}

void troca(float *x, float *y){
  float aux;
  aux = *x;
  *x = *y;
  *y = aux;
}

void ordena(float *vet,int n, int(*compare)(float, float)){
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j<n; j++){
      if(compare(vet[i], vet[j]) == 1){
        troca(&vet[i], &vet[j]);
      }
    }
  }
}

int main ()
{
  int n;
  scanf("%d", &n);
  float *vet;
  vet = malloc(n*sizeof(float)); 
  for(int i = 0; i < n; i++){
    scanf("%f", &vet[i]);  
  }
  ordena(vet, n, compare);  
  for(int i = 0; i<n; i++){
    printf ("%f ",vet[i]);
  }
  free(vet);
  return 0;
}