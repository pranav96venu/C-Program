/*
    Create a function that segregates even and odd values of an integer array using pointers
*/
#include<stdio.h>
#include<stdlib.h>
void odd_even(int *a, int n)
{
    int x = n;
    int *even = (int*)malloc(n*sizeof(int));
    int *odd = (int*)malloc(n*sizeof(int));
    int e = 0;
    int o = 0;
    for(int i=0; i<n; i++)
    {
        if(*(a+i)%2==0)
        {
            *(even + e) = *(a+i);
            e++;
        }
        else
        {
            *(odd + o) = *(a+i);
            o++;
        }
    }
    o = 0;
    for(int i=0; i<n; i++)
    {
        if(i<e)
        {
            *(a+i) = *(even+i);
        }
        else
        {
            *(a+i) = *(odd+o);
            o++;
        }
    }
    free(even);
    free(odd);

}
int main()
{
    int a[]={1,2,3,4,5,6,6,7,8};
    int size = sizeof(a)/sizeof(a[0]);
    printf("Array before sorting: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
    odd_even(a,size);
    printf("Array after sorting: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d, ", a[i]);
    }
    return 0;
}

or

#include <stdio.h>

void odd_even(int *a, int n)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        // Move left forward if it's already even
        while (a[left] % 2 == 0 && left < right)
            left++;

        // Move right backward if it's already odd
        while (a[right] % 2 == 1 && left < right)
            right--;

        // Swap odd at left with even at right
        if (left < right)
        {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left++;
            right--;
        }
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 6, 7, 8};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Array before segregation:\n");
    for (int i = 0; i < size; i++)
        printf("%d, ", a[i]);
    printf("\n");

    odd_even(a, size);

    printf("Array after segregation (even first, odd later):\n");
    for (int i = 0; i < size; i++)
        printf("%d, ", a[i]);
    return 0;
}
