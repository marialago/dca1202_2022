#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3, j=2, *p, *q;

    p = i; // legal, porém com warning: p recebe o conteúdo de i, precisa converter o tipo de a
    q = &j; // legal
    p = &*&i; // legal: recupera o endereço do conteúdo do endereço de i 
    i = (*&)j; // ilegal: a expressão *& sem estar associada a uma variável é considerada inválida, por estar dentro do parenteses vai ser priorizada
    i = *&j; // legal
    i = *&*&j; // legal: i recebe o endereço do conteúdo do endereço do conteúdo de j
    q = *p; // legal
    i = (*p)++ + *q; // legal: faz a operação com o conteúdo de p + conteúdo de q, e ao final, realiza a operação *p = *p + 1
    return 0;
}