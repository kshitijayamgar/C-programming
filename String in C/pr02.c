//basic operation on string
#include<stdio.h>
void main(){
        char *str="virat";
        printf("%s",str);
        str[2]="k";
        printf("%c",str[2]);
}
/*
   program is with  warning and segmatn fault 
    
   beacause *str="virat"; this string we can not change once we declare it,
   still we trying to change that string thats why we get warning first,and then segmentation fault...
   
   */
