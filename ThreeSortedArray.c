/*
    Implement a function that finds the common elements in three sorted arrays using pointers
*/

#include<stdio.h>
void intersect(int *a, int *b, int *c, int sa, int sb, int sc)
{
    printf("Common elements are: \n");
    int i=0,j=0,k=0;
    while(i<sa && j<sb && k<sc)
    {
        if(*(a+i)==*(b+j) && *(b+j)==*(c+k))
        {
            printf("%d, ",*(a+i));
            i++,j++,k++;
        }
        if(*(a+i)<*(b+j))
        {
            i++;
        }
        else if(*(c+k)>*(b+j))
        {
            j++;
        }
        else
            k++;
    }
}
int main()
{
    int a[]={1,2,3,4,5,6};
    int b[]={2,4,6};
    int c[]={2,3,6};
    int *d = a, *e = b, *f = c, sa=sizeof(a)/sizeof(a[0]), sb = sizeof(b)/sizeof(b[0]), sc = sizeof(c)/sizeof(c[0]);
    intersect(d,e,f,sa,sb,sc);
    return 0;
}