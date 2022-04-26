#include <stdio.h>
#include <stdlib.h>

void soma(int *vet1, int *vet2, int *vet3, int n){
  for(int i = 0; i < n; i++){
    vet3[i] = vet1[i] + vet2[i];
  }
  for(int i = 0; i < n; i++){
    printf("%d ", vet3[i]);
  }
  free(vet1);
  free(vet2);
  free(vet3);
}

int main(void) {
  int n;
  int *vet1, *vet2, *vet3;
  scanf("%d", &n);
  vet1 = malloc(n*sizeof(int));
  vet2 = malloc(n*sizeof(int));
  vet3 = malloc(n*sizeof(int));
  for(int i = 0; i < n; i++){
    scanf("%d", &vet1[i]);
  }
  for(int i = 0; i < n; i++){
    scanf("%d", &vet2[i]);
  }
  soma(vet1, vet2, vet3, n);
  return 0;
}