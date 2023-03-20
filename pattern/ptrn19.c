/*
a a a a a
b b b b
c c c
d d
e
*/
#include<stdio.h>
void main(){
        char ch=97;
        for(int i=1;i<=5;i++){
          for(int j=5;j>=i;j--){
           printf(" %c ",ch);
          }
          ch++;
          printf("\n");
      }
        printf("\n");
}


