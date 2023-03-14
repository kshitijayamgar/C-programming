//pointer arthimetic on int array
#include<stdio.h>
void main(){
        int arr[]={10,20,30,40,50};
        int *ptr1=&(arr[0]);
        int *ptr2=&(arr[4]);
        for(int i=0;i<5;i++){
                printf("|%d|",arr[i]);
        }
          printf("\n");
          printf("%d\n",*ptr2);
           ptr2--;
           printf("%d\n",*ptr2);
}
