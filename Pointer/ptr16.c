/*dangling ptr*/
#include<stdio.h>
int a=10;
int b;
int *iptr=0;//global pointer
void fun(){
        int x=30; //local varible of function 
        iptr=&x;
        printf("%p\n",iptr);
        printf("%d\n",*iptr);
     }
/* after the task in function is completed the stack frame of that function
 * is pop ...
 * as function stack frame is poped the data is also gone 
 * but the our pointer is still becalm there 
 * our pointer is myth making that the data is present 
 * but data is gone with the function stack frame pop*/
void main(){
     printf("%d\n",a);
     printf("%d\n",b);
        fun();
     printf("%d\n",*iptr);
}
