//writing own function for strlen()
// mystrlen function

#include<stdio.h>

int mystrlen(char *str){

      int count=0;

        while(*str!='\0'){

                count++;

                str++;

        }

        return count;

}

void main(){

        char name[]={'p','r','i','t','i','\0'};

        char *str="vimala";

        printf("name:%d\n",mystrlen(name));

        printf("str:%d\n",mystrlen(str));

}
