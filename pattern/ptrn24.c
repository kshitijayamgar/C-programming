/*
  - - - *
  - - * *
  - * * *
  * * * *

  */
#include<stdio.h>
void main(){
	int row;
	printf("enter the row:\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
	  for(int sp=row-1;sp>=i;sp--){
		 printf(" - ");
	  }
	  for(int j=1;j<=i;j++){
		  printf(" * ");

	   }
	  printf("\n");

	}
}
