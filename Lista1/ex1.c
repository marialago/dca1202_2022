#include <stdio.h>
    int main() {
        float i=3,j=5;
        float a;
        float *p, *q;
        p = &i;
        q = &j;
       if (p == &i){
            printf("true\n" );
        }
        else{
            printf("false\n");
        }
        printf("%f\n",*p - *q);
        printf("%f\n",**&p);
       printf("%f\n",(3 - *p/(*q) + 7));
    return 0;
    }
