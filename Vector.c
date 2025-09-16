/* 
    Write a function to calculate the dot product of two vectors using pointers.
*/
#include<stdio.h>

void vector_product(int *a, int *b, int len)
{
    int vp=0;
    for(int i=0;i<len;i++)
    {
        vp = vp + a[i]*b[i];
    }
    printf("Vector product: %d",vp);
}
int main()
{
    int vect_a[2]={1,2};
    int vect_b[2]={3,4};
    int *a = vect_a;
    int *b = vect_b;
    int length = 2;
    vector_product(a,b,2);
    return 0;
}