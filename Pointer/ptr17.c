// changing the value of const ptr
#include<stdio.h>
void main(){
        int x=10;
        int y=20;
      const int *ptr=&x;
      printf("Adress in ptr:%p\n",ptr);
      printf("Adress of x:%p\n",&x);
      printf("value at ptr:%d\n",*ptr);

      printf("after the value of const ptr is changed\n");
          *ptr=&y;
        /* ptr=&y; if we add this line in program we can change the value
	 of  const ptr*/ 
      printf("updated value in ptr:%p\n",ptr);
      printf("Adress of y:%p\n",&y);
      printf("%d\n",*ptr);
   }
//program have the error assignment  of read-only location
