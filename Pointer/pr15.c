//simple pointer code
#include<stdio.h>
void main(){
        int x=10;
        int *ptr=&x;
        printf("x:%d\n",x);
        printf("value at ptr:%d\n",*ptr);
          *ptr=30;
         printf("now value at ptr:%d\n",*ptr);
}
