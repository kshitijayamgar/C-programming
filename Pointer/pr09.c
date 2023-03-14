//pointer arthimetic on char array
#include<stdio.h>
void main(){
        char arr[]={'A','B','C','D'};
        char *ptr1=&arr[2];
        char *ptr2=&arr[3];
        for(int i=0;i<4;i++){
                printf("|%c|",arr[i]);
        }
        printf("\n");
        int x=ptr2-ptr1;
        printf("difference:%d\n",x);
        printf("arr[2]=%c\n",*ptr1);
        printf("arr[3]=%c\n",*ptr2);
}
