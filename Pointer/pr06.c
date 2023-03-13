//constant pointer 
#include<stdio.h>
void main(){
    const int a=10;
           int b=20;
        printf("add of a:-%p\n",&a);
        printf("add of b:-%p\n",&b);
             const int*ptr=&a;//declaring const ptr for &a
             *ptr=&b; //here we try to change the adress in const ptr
        printf("adress in ptr:%p\n",ptr);
        printf("val at ptr:%d\n",*ptr);
	/*code is with error:assignment of read-only location ‘*ptr’
             *ptr=&b;
	       ^
	 */

}
