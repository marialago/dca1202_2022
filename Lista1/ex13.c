#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
  float aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int main(void) {
  int n;
  scanf("%d", &n);
  float *vet;
  vet = malloc(n * sizeof(float)); //alocação de memória dinâmica
  for(int i = 0; i < n; i++){
    scanf("%f", &vet[i]);
  }
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j<n; j++){
      if(vet[i] > vet[j]){ 
        troca(&vet[i], &vet[j]); 
      }
    }
  }
  for(int i = 0; i < n; i++){
    printf("%f\n", vet[i]);
  }
  free(vet);
  return 0;
}