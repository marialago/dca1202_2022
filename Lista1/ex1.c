#include <stdio.h>
#include <stdlib.h>
    int main() {
        float i=3,j=5;
        float a;
        float *p, *q;
        p = &i; // p recebe o endereço de i
        q = &j; // q recebe o endereço de j
       if (p == &i){ //verifica se p é igual ao endereço de i
            printf("true\n" );
        }
        else{
            printf("false\n");
        }
        printf("%f\n",*p - *q); //p - q => 3 - 5 = -2
        printf("%f\n",**&p); //aqui retorna o cnteudo que está armazenado em p, ou seja o 3 que é o valor de i
       printf("%f\n",(3 - *p/(*q) + 7)); //(3 - 3/5 + 7)
    return 0;
    }

// saida:
// p == &i - true
// *p - *q; - -2.000000
// **&p; - 3.000000
// 3 - *p/(*q) + 7 - 9.400000
