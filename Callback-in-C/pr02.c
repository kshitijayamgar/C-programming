#include<stdio.h>
int sum(int a, int b){

	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int m(int (*ptr)(int int)){

   //(*ptr)(int,int);
}
void main(){
	 
	m(&sum,1,2);
	m(&sub,1,5);
}
