#include<stdio.h>
void printstring(char str1[]);
void stringprint(char *str2);
void main(){
        char arr[20];
        printf(" enter string:\n");
         gets(arr);
         printstring(arr);
         stringprint(arr);
}
void printstring(char str1[]){
        printf("In printstring\n");
        puts(str1);
}
void stringprint(char *str2){
        printf("In stringprint\n");

        puts(str2);
}
