#include<stdio.h>  
     int main()    
    {    
    int n,sum=0,m;    
    printf("Enter a number:");    
    scanf("%d",&n);    
    while(n>0)    
    {    
    m=n%10;    
    sum=sum+m;    
    n=n/10;    
    }    
    printf("Sum of entered num is=%d\n",sum);    
    return 0;  
    }   
