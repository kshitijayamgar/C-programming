//basic program pointer
#include<stdio.h>
void main(){
        int x=10;
        int *ptr1=&x;
        int *ptr2=x;
        printf("value of x=%d\n",x);
        printf("value of in ptr1:%p\n",ptr1);
        printf("value of in ptr2:%p\n",ptr2);
}
