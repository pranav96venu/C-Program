/*
    Design a function that finds the intersection of two arrays using pointers.
*/

#include <stdio.h>

void intersect(int *a, int *b, int m, int n)
{
    int c[(m<n)?m:n],d=0;
    int count = 0;
    // printf("Intersection elements are: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            count = 0;
            if(a[i]==b[j])
            {
                for(int k=0;k<d;k++)
                {
                    if(a[i]==c[k])
                    {
                        count=1;
                        break;
                    }
                }
                if(count==0)
                {
                    c[d]=a[i];
                    d++;
                }
                else
                    break;
            }
        }
    }
    printf("Intersection elements are: \n");
    for(int i=0;i<d;i++)
        printf("%d, ",c[i]);
}

int main()
{
    int a[] = {1,2,3,4,5,6,3};
    int b[] = {1,3,5,3};
    int *c, *d;
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    c = a;
    d = b;
    intersect(c,d,m,n);
    return 0;
}