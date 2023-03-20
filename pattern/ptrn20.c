/*
E E E E E
D D D D
C C C
B B
A
*/
#include<stdio.h>
void main(){
        char ch=69;
        for(int i=1;i<=5;i++){
          for(int j=5;j>=i;j--){
           printf(" %c ",ch);
          }
          ch--;;
          printf("\n");
      }
        printf("\n");
}




