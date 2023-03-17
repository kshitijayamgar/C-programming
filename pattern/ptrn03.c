/*  a a a
    b b b
    c c c
           */

#include<stdio.h>
void main(){
	char ch='a';
  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
      printf(" %c ",ch);
    }
    ch++;
    printf("\n");
  }
  printf("\n");
}

