#include<stdio.h>
int A1(){

	printf("In A1()\n");
	 return 1+2;
}
int A2(){

	printf("In A2()\n");
         return 5-2;
}
int B(int (*ptr)()){
	(*ptr)();
}
void main(){
    int ret=B(&A1);
    int ret2=B(&A2);
    printf("%d\n%d\n",ret,ret2);
}
