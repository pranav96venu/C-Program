/*
    Design a program that checks if a string is a prefix of another string using pointers.
*/

#include <stdio.h>
#include<string.h>

void prefix_check(char *a, char *prefix)
{
    while(*prefix)
    {
        if(*a != *prefix)
        {
            printf("The given word is not the prefix\n");
            return;
        }
        a++;
        prefix++;
    }
    printf("The given word is the prefix\n");
}
int main()
{
    char a[20]="Programming";
    char prefix[20];
    printf("Enter the word: \n");
    scanf("%s",prefix);
    char *b = a;
    char *c = prefix;
    prefix_check(a,prefix);

}