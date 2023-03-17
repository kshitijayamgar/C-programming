//tricky pointer code
#include<stdio.h>
void fun(int *p){        //decalring a pointer as parameter
        printf("%p\n",p);
}
void main(){
        int a=10;
        fun(a); //but passing a int type argument instead expected argument
}
/*output  with warning and note */
