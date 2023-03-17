//dangling ptr scene in malloc n free
#include<stdio.h>
#include<stdlib.h>
void main(){
        int *ptr=(int*)malloc(sizeof(int));
        *ptr=5;
        printf("1:%d\n",*ptr);
         free(ptr);
        printf("2:%d\n",*ptr);
}
