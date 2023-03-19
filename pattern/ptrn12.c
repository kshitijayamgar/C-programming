
/*
  1 1 1
  2 2 2
  3 3 3
 
 */
//same pattern but taking inputs from user
#include<stdio.h>
int main()
{
   int n;

   printf("Enter the number of rows: ");
   scanf("%d",&n);

   for(int r=1; r<=n; r++)
   {
     for(int c=1; c<=n; c++)
     {
       printf(" %d ",r);
     }
 //  n++;'n'runtime la ghetoy ani tyat pn tyla increment  kel tr infinite loop mde firel 
     printf("\n");
   }

  
 }
