/*
    Create a program that checks if a string is a palindrome using pointers.
*/

#include <stdio.h>
#include<string.h>
void palindrom(char *first, char *last)
{
    int flag = 0;
    while(first<last)
    {
        if(*first!=*last)
        {
            printf("The string is not a palindrom \n");
            flag = 1;
            break;
        }
        first++;
        last--;
    }
    if(flag == 0)
    {
        printf("The string is a palindrom \n");
    }
}
int main()
{
    char a[20]="malayalam";
    int len = strlen(a);
    char *first = a;
    char *last = a+(len-1);
    palindrom(first,last);
    return 0;
}