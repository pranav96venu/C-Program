/*
    Implement a program that finds the first non-repeated character in a string using
    pointers.
*/

#include <stdio.h>

void non_repeat_char (char *a)
{
    char *p1,*p2;
    int count =0;
    for(p1=a;*p1!='\0';p1++)
    {
        count = 0;
        for(p2=a;*p2!='\0';p2++)
        {
            
            if(p1!=p2 && *p1==*p2)
            {
                count = 1;
                break;
            }
        }
        if(count==0)
        {
            printf("The first non-repeated character is: %c\n", *p1);
            return;
        }
    }
    printf("There are no first non-repeated character");
}

int main()
{
    char a[20]="Pranav";
    char *p = a;
    non_repeat_char(p);
    return 0;
}
