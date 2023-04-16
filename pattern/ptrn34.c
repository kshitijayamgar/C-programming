/*
11111
1   1
1   1
1   1
11111 

*/
#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==5 || j==1 || i==1 || i==5)
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

