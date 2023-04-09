#include<stdio.h>
void main(){
        FILE *fp=fopen("core2web.txt","r");
        printf("%p\n",fp);
}
/*
  Its must to have the file exist when ,we use the "r" read mode
  above code is with no error but , the *fp pointer  we set is with no adress in it ...
  means what file is not exist. 
 */
