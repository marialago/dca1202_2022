#include <stdio.h>
#include <stdlib.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet; //f recebe o endereço do index 0 do vetor
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d ",i); //valor do contador i: 
    printf("vet[%d] = %.1f ",i, vet[i]); //elemento na posição i do vetor
    printf("*(f + %d) = %.1f ",i, *(f+i));  //conteúdo armazenado no endereço da posição i do ponteiro f
    printf("&vet[%d] = %X ",i, &vet[i]); //endereço de i no vetor
    printf("(f + %d) = %X ",i, f+i); //irá imprimir o endereço da posição i do ponteiro, e por ser um ponteiro para float, não é preciso colocar o & para imprimir seu endereço
  }
}
// saidas de cada index
// contador/valor/valor/endereco/endereco
// i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = DD482930(f + 0) = DD482930
// i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = DD482934(f + 1) = DD482934
// i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = DD482938(f + 2) = DD482938
// i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = DD48293C(f + 3) = DD48293C
// i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = DD482940(f + 4) = DD482940