//os ponteiros guardam endereços de áreas do código
// (PUC-RS) 
// "O uso de ponteiros para funções em C serve principalmente para definir, em tempo de execução, 
// qual função será executada, sem a necessidade de escrever o nome da função, de forma explícita naquele ponto do código.
// Em geral, a definição de qual função será executada é feita em um outro ponto do código, fazendo o ponteiro 
// apontar para a função desejada."

#include <stdio.h>

int main(){
unsigned int x;
unsigned char *px;
x=3; // vai imprimir o valor 3
px = &x;
printf(%d, *px);
return 0;
}
