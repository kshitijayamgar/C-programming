#include<stdio.h>
void main(){
        int x=10;
        char y='A';
        int *ptr1=&x;
        char *ptr2=&y;
        printf("value in ptr1:%p\n",ptr1);
        printf("value in ptr2:%p\n",ptr2);
        printf("value at ptr1:%d\n",*ptr1);
        printf("value at ptr2:%c\n",*ptr2);
}
