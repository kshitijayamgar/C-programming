//void pointer
#include<stdio.h>
void main(){
        int x=10;
        void *ptr=&x;
        printf("address in void ptr:%p\n",ptr);
        printf("value at void ptr: %d \n",(int*)ptr);
}
//program give output with warning
/*trying to set the adress of 'x'  in  void pointer, using typecast trying to
 *  acess the that value x=10 using void pointer 
 *  but no its not give you expected output
 *  output you get is some garbage value...
 *  by the rule we know pointer and data have same type
 *  here pointer and data not having the same type..
*/
