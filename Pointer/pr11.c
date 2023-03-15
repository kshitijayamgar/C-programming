//pointer arthimetic on int Array:
#include<stdio.h>
void main(){
        int arr[]={10,20,30,40,50};

        for(int i=0;i<5;i++){
                printf("|%d|",arr[i]);
        }
             printf("\n");
             int *ptr=&(arr[0]);
             printf("%p\n",ptr);
             printf("%d\n",(*ptr)++);
             printf("%d\n",(*ptr)++);

             printf("%d\n",*ptr);




}
