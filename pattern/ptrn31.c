/*
 
*********
 *******
  *****
   ***
    *
*/






#include<stdio.h>
int main()
{
int  m = 10;
for(int i = 1;i <= 5;i++)
{
for(int j = 1;j < i;j++)
{
printf(" ");
}
for(int k = 1;k < m;k++)
{
printf("*");
}
m = m - 2;
printf("\n");
}
return 0;

}
