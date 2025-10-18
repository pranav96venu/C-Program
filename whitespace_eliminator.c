/*
    Write a function that trims leading and trailing whitespace from a string using pointers.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *trim_space(char *start, int len)
{
    char *end;
    end = start + (len-1);
    while(*start==' ')
        start++;
    if(*start == '\0')
    {
        printf("String is empty.");
        return start;
    }
    while(start<end && *end==' ')
        end--;
    *(end+1)='\0';
    return start;
}
int main()
{
    char a[20]=" Hello World  ";
    int len = strlen(a);
    printf("Before trim: %s \n",a);
    char *trim = trim_space(a,len);
    printf("After trim:'%s'",trim);
    return 0;
}