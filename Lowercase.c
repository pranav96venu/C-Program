/*
    Write a function that converts a string to lowercase using pointers
*/

#include <stdio.h>

void lowercase(char *a)
{
    printf("The entered uppercase string: %s",a);
    
}
int main()
{
    char a[20];
    printf("Enter the uppercase string: \n");
    scanf("%s",a);
    lpwercase(a);
    return 0;
}