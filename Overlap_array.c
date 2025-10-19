/*
    Design a program to find the overlapping part of two arrays using pointers.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a[] = {1,2,4,3,4};
    int b[] = {2,4,4,6,8,2,4};
    int sa = sizeof(a)/sizeof(a[0]);
    int sb = sizeof(b)/sizeof(b[0]);
    int *pa = a;
    int *pb = b;
    int i,k,flag;
    printf("The overlapping elements of both the arrays are: \n");
    for(i=0; i<sa; i++)
    {
        k=0,flag =0;
        while(k<i)
        {
            if(*(pa+i)==*(pa+k))
            {
                flag = 1;
                break;
            }
            else
                k++;
        }
        for(int j=0; j<sb; j++)
        {
            if(*(pa+i)==*(pb+j) && (flag==0))
            {
                printf("%d ",*(pa+i));
                break;
            }
        }
    }
    return 0;
}