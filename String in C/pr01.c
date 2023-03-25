//Basic program of string declaration ;To check difference between the 2 ways
#include<stdio.h>
void main(){
        char str1[]={'s','a','k','s','h','i'}; //way 1st
        char *str2="sakshi";          //way 2nd
        for(int i=0;i<6;i++){
        printf("%c",str1[i]);
         }
        printf("\n");
        printf("%s\n",str2);
        printf("%ld\n",sizeof(str1));
        printf("%ld\n",sizeof(str2));
}

