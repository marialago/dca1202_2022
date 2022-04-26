#include <stdio.h>
#include <stdlib.h>

void multiplica(int **A, int **B, int **C, int la, int ca, int cb);

int main()
{
    int **A, **B, **C, la, ca, cb; 
    scanf("%d", &la);
    scanf("%d", &ca);
    scanf("%d", &cb);
    //alocando blocos auxiliares
    A = malloc (la * sizeof(int*));
    B = malloc (ca * sizeof(int*));
    C = malloc (la * sizeof(int*));
    //alocando linhas
    A[0] = malloc(ca*la*sizeof(int));
    B[0] = malloc(cb*ca*sizeof(int));
    C[0] = malloc(cb*la*sizeof(int));

    //fixando  ponteiros 
    for(int i = 1; i < la; i++){
      A[i] = A[i-1] + ca;
    }
    for(int i = 1; i < ca; i++){
      B[i] = B[i-1] + cb;
    }
    for(int i = 1; i < la; i++){
      C[i] = C[i-1] + cb;
    }
    for (int i = 0; i<la; i++){
        for (int j = 0; j<ca; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i<ca; i++){
         for (int j = 0; j<cb; j++){
             scanf("%d", &B[i][j]);
        }
    }
    multiplica(A, B, C, la, ca, cb);
    //liberação das matrizes
    free(A[0]); 
    free(B[0]);
    free(C[0]);
    //liberação dos blocos
    free(A); 
    free(B);
    free(C);
    return 0;
}

void multiplica(int **A, int **B, int **C, int la, int ca, int cb){
  for(int i = 0; i < la; i++){
    for(int j = 0; j < cb; j++){
      int soma = 0;
      for(int k = 0; k < ca; k++){
        soma = soma + A[i][k] * B[k][j];
      }
      C[i][j] = soma;
    }
  }
  for(int i = 0; i < la; i++){
    for(int j = 0; j < cb; j++){
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
}