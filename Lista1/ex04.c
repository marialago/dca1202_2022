#include <stdio.h>

int main(void) {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20; // o endereço de valor é alterado, então valor recebe 20
  printf("%d \n", valor);
//   saida (a): 20
  

  /* (b) */
  temp = 26.5;
  p2 = &temp; 
  *p2 = 29.0; // o conteúdo do endereço de p2 é alterado, então temp recebe 29.0
  printf("%.1f \n", temp);
  //   saida (b): 29

  /* (c) */
  p3 = &nome[0]; // p3 recebe o endereço de nome[0]
  aux = *p3; // aux recebe o conteúdo de p3, que é o primeiro index do vetor nome, ou seja, "P"
  printf("%c \n", aux);
  //   saida (c): P

  /* (d) */
  p3 = &nome[4];
  aux = *p3; // aux recebe o conteúdo de p3, acessando o index 4 do vetor nome que é "e"
  printf("%c \n", aux);
  //   saida (d): e

  /* (e) */
  p3 = nome; // p3 recebe nome, o endereço da primeira posição de nome
  printf("%c \n", *p3);
    //   saida (e): P

  /* (f) */
  p3 = p3 + 4; // incrementa ao endereço de p3 em 4, então começa a apontar para o index 4 do nome
  printf("%c \n", *p3);
  //   saida (f): e

  /* (g) */
  p3--; // decrementa ao endereço de p3 em 1, então começa a apontar para o index 3 do nome
  printf("%c \n", *p3);
    //   saida (g): e

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor; //p4 recebe o endereço do vetor[0]
  idade = *p4; //idade recebe o conteúdo do endereço de p4
  printf("%d \n", idade);
  //   saida (h): 31

  /* (i) */
  p5 = p4 + 1; //p5 recebe o endereço de p4 +1 => o endereço vetor[1]
  idade = *p5; //idade recebe o conteúdo do endereço de p5
  printf("%d \n", idade);
  //   saida (i): 45

  /* (j) */
  p4 = p5 +1; //p4 recebe o endereço de p5 +1 => o endereço vetor[2]
  idade = *p4; //idade recebe o conteúdo do endereço de p5
  printf("%d \n", idade);
     //   saida (j): 27

  /* (l) */
  p4 = p4 -2; //p4 recebe o endereço de p5 -2 => o endereço vetor[0]
  idade = *p4; //idade recebe o conteúdo do endereço de p4
  printf("%d \n", idade);
  //   saida (l): 31

  /* (m) */
  p5 = &vetor[2] - 1; //p5 recebe o endereço de vetor[2] -1 => o endereço de vetor[1]
  printf("%d \n", *p5); //exibe o endereço de p5
  //   saida (m): 45

  /* (n) */
  p5++; //incremento de p5 em 1 => o endereço de vetor[2]
  printf("%d \n", *p5);//imprime o conteúdo do endereço de p5, ou seja, vetor[2] = 27
    //   saida (n): 27

  return(0);
    
}