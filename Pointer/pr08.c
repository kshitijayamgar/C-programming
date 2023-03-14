#include<stdio.h>
void main(){
        int a=10;
        const int *ptr1=&a;//pointer says that Am only ypurs to &a
        printf("value at ptr1:%d\n",*ptr1);
          int b=20;
          ptr1=&b;//but its lie..
          printf("value at ptr1:%d\n",*ptr1);
}
/* program runs sucessesfully without any error without any warning
 * we can change the value of const pointer..here is the proof
 * */
