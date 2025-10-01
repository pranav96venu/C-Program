/*
    Implement a program that swaps two strings using pointers to pointers.
*/
#include<stdio.h>
void swap_string(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char a[20]="ABC";
    char b[20]="PQR";
    char *p = a;
    char *q = b;
    printf("Value of a = %s and b = %s before swap \n",a,b);
    swap_string(&p,&q);
    printf("Value of a = %s and b = %s after swap \n",a,b);
    return 0;
}