//null ptr
#include<stdio.h>
void main(){
        int *ptr=0;
        printf("%d\n",*ptr);
}
/*program is with no error,no warning at compile time 
 * but at runtime this give segmentation fault..
 * use printf("%p\n",ptr);  this statement there
 *  this will give '(nil)'
 * means pointer storing the null or zero
 */
