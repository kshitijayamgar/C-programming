#include<stdio.h>
void main(){
     const int a=10;
        printf("before val of a:%d\n",a);

        const int*ptr=&a;
          int*ptr2=&a;
          *ptr2=16;
          printf("%d\n",a);
          printf("value at ptr :%d\n",*ptr);
         }
/* In this program we assign the const value to const pointer 
 * we can say that here we cannot change the values of const varibles but,
 * one data can acess by 2 pointer at time ...
 * so the using second pointer we can change the value of const int 
 * prograam give us o/p but with warning...
 * warning: initialization discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
              int*ptr2=&a;
	            ^
*/

