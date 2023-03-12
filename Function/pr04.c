//First declaration of function and then initialization
#include<stdio.h>
void fun(int,int);

void main(){
        int x,y;
        printf("enter values for x and y\n");
        scanf("%d %d",&x,&y);
        printf("add of y:%p\n",&y);
        printf("add of x :%p\n",&x);
        fun(x,y);
}
void fun(int x,int y){
        printf("%d\n",x+y);
}
