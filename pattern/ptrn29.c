/*
Enter no of rows: 3
1	3	5	
7	9	11	
13	15	17	



*/
#include<stdio.h>

void main() {
	int rows,num1=1;
	printf("Enter no of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows ;i++){
		for(int j=1 ;j<=rows ;j++){
			printf("%d\t",num1);
			num1+=2;
		}
		
		printf("\n");
	
	}
}
