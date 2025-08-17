/*
    Implement a function that merges two sorted arrays into a third array using pointers
*/

#include <stdio.h>

void merge(int *c, int* d, int size_a, int size_b)
{
    int size = size_a + size_b;
    int e[size];
    for(int i=0;i<size;i++)
    {
        if(i<size_a)
            e[i]=c[i];
        else
            e[i]=d[i-size_a];
    }
    for(int j=0;j<size;j++)
    {
        printf("%d, ",e[j]);
    }
}

int main() {
    int a[5] = {1,2,3,4,5};
    int b[5] = {6,7,8,9,0};
    int *c = a;
    int *d = b;
    int size_a = sizeof(a)/sizeof(int);
    int size_b = sizeof(b)/sizeof(int);
    merge(c,d,size_a,size_b);
    return 0;
}