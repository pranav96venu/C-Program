/*
    Design a program to concatenate two strings without using standard library functions,
    only pointers.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[20] = "ABC";
    char b[20] = "PQR";
    char *p = a;
    char *q = b;
    int size_a = sizeof(a);
    int size_b = sizeof(b);
    char *c = (char *)malloc((size_a+size_b)*(sizeof(char)));
    if (c == NULL)
    {
        printf("ERROR, string c not dynamically created \n");
        return 1;
    }
    char *r = c;
    while(*p!='\0')
    {
        *r = *p;
        r++;
        p++;
    }
    while(*q!='\0')
    {
        *r = *q;
        r++;
        q++;
    }
    r='\0';
    printf("A = %s \n",a);
    printf("B = %s \n",b);
    printf("Concatenated string = %s \n",c);
    free(c);
    return 0;
}