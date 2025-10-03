/*
Implement a function that splits a string into two halves and returns pointers to the
beginning of each half
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void split_string(char *a, int len, char **a1, char **a2)
{
    char *a3 = (char*)malloc(len*sizeof(char));
    int n = len/2;
    int k = 0;
    for(int i=n;*(a+i)!='\0';i++)
    {
        *(a3+k) = *(a+i);
        k++;
    }
    *(a3+k) = '\0';
    *(a+n) = ' ';
    k=n+1;
    for(int i=0;*(a3+i)!='\0';i++)
    {
        *(a+k) = *(a3+i);
        k++;
    }
    *(a+k) = '\0';
    printf("%s \n",a);
    *a2 = a+n+1;
    *a1 = a;
    free(a3);
}
int main()
{
    char a[20] = "HelloWorld";
    char *a1, *a2;
    int len = strlen(a);
    printf("String before split: %s \n",a);
    split_string(a,len,&a1,&a2);
    printf("String after split: %s \n",a1);
    printf("Splitted strings: \n a1 = %c \n a2 = %c \n",*a1,*a2);
    return 0;
}