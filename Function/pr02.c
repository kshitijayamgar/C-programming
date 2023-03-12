//Passing ptr to function as parameter
#include<stdio.h>
void funarr(int (*arr)[]){
        printf("%p\n",arr);
}
void main(){
        int arr1[]={10,20,30,40};
        printf("adress of arr1 in main\n");
        printf("%p\n",&arr1);
printf(" returned adress from passed fun\n");
        funarr(&arr1);
}
