/*
Design a function that determines if two pointers point to the same array.
*/
#include<stdio.h>
void same_array(int *a, int *b, int *base, int n)
{
    if((a>base && a<(base + n)) && (b>base && b<(base + n)))
    {
        printf("The two pointers point to the same array");
    }
    else
    {
        printf("The two pointers do not point to the same array");
    }
}
int main()
{
    int arr[] = {1,2,3,4};
    int p = 9;
    int *a = &arr[2];
    int *b = &p;
    int sizeof_c = sizeof(arr)/sizeof(arr[0]);
    same_array(a,b,arr,sizeof_c);
    return 0;
}