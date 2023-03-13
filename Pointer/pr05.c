//Ptr arthimetic on individual char's still its pointer arthmetic  goes sequential
#include<stdio.h>
void main(){
        char ch1='X';
        char ch2='Y';
        char ch3='Z';
        char *ptr=&ch1;
        printf("%p\n",ptr);
        printf("%c\n",*ptr);
      printf("size of ptr:%ldbyte\n",sizeof(ptr));
        printf("%p\n",(ptr+1));
        printf("%c\n",*(ptr+1));

        printf("%p\n",(ptr+2));
        printf("%c\n",*(ptr+2));
}
