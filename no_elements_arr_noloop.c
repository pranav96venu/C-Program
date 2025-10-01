/*
    Create a function that counts the number of elements in an array using pointer arithmetic, without utilizing loop constructs.
*/
#include<stdio.h>
int count(int *start, int *last)
{
    if(start == last)
    {
        return 0;
    }
    else
    {
        start++;
        c++;
        return 1+count(start,last);
    }
}
int main()
{
    int arr[] = {1,2,3,4};
    int *a = arr;
    int d = sizeof(arr)/sizeof(arr[0]);
    int *b = a+d;
    int size_of_arr = count(a,b);
    printf("Number of elements in the array are: %d",size_of_arr);
    return 0;
}