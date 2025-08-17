/*
    Implement a function that merges two sorted arrays into a third array using pointers
*/

// Online C compiler to run C program online
#include <stdio.h>

void sort_merge(int *c, int* d, int size_a, int size_b)
{
    int size = size_a + size_b;
    int e[size];
    int temp;
    for(int i=0;i<size;i++)
    {
        if(i<size_a)
            e[i]=c[i];
        else
            e[i]=d[i-size_a];
    }
    for(int j=0;j<size;j++)
    {
        for(int k=j+1;k<size;k++)
        {
            if(e[j]>e[k])
            {
                temp=e[j];
                e[j]=e[k];
                e[k]=temp;
            }
        }
    }
    for(int l=0;l<size;l++)
    {
        printf("%d, ",e[l]);
    }
}

int main() {
    int a[5] = {0,9,5,7,3};
    int b[5] = {1,2,4,6,8};
    int *c = a;
    int *d = b;
    int size_a = sizeof(a)/sizeof(int);
    int size_b = sizeof(b)/sizeof(int);
    sort_merge(c,d,size_a,size_b);
    return 0;
}