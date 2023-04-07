//Count total number of vowel or consonant

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100 //Declare the maximum size of the string

void main()
{
    char str[str_size];
    int  len, vowel, cons;
	
       printf("\n\nprogram for Count total number of vowel or consonant in string:\n");
       	
       printf("enter  the string : ");
       fgets(str, sizeof str, stdin);	

    vowel = 0;
    cons = 0;
    len = strlen(str);

    for(int i=0; i<len; i++)
    {

    if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            cons++;
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    printf("The total number of consonant in the string is : %d\n\n", cons);

}
