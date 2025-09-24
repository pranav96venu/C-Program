/*
How can you find the size of a data type without using the sizeof operator, using pointer arithmetic? 
*/
#include <stdio.h>
#include<stdint.h>
int main() {
    int p = 0;
    int *q = &p;
    int *r = q+1;
    printf("address of r = %p \n",(void*)r);
    uintptr_t p1 = (uintptr_t)(q);
    uintptr_t p2 = (uintptr_t)(r);
    int size = p2 - p1;
    printf("size of the datatype of p is : %d",size);
    return 0;
}