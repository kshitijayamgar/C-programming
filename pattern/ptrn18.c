/*
A A A A A
B B B B
C C C
D D
E
*/
#include<stdio.h>
void main(){
	char ch='A';
	for(int i=1;i<=5;i++){
	  for(int j=5;j>=i;j--){
	   printf(" %c ",ch);
	  }
	  ch++;
	  printf("\n");
      }
	printf("\n");
}

