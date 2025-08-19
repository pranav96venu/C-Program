/*
    Write a function that converts a string to lowercase using pointers
*/

#include <stdio.h>

void lowercase(char *a)
{
    printf("The entered string: %s \n", a);
    char b[20]; // Target buffer
    char *d = b;

    while (*a)
    {
        if (*a >= 'A' && *a <= 'Z')
            *d = *a + 32; // Convert to lowercase
        else
            *d = *a; // Leave as is

        a++;
        d++;
    }

    *d = '\0'; // Null-terminate the string

    printf("Corresponding lowercase string: %s \n", b);
}

int main()
{
    char a[20];
    printf("Enter the string (uppercase or mixed): \n");
    scanf("%s", a);
    lowercase(a);
    return 0;
}
