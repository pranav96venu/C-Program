/*
    write a c program that add one exclamation mark to every group of consecutive exclamation marks
    (a single exclamation mark is also considered a group) Then change all the periods(.) to exclamation mark.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[30] = "Hello. How ! are !! you !!!";
    char output[50];
    int j = 0;
    int length = strlen(input);
    for(int i=0;i<length;i++,j++)
    {
        if(input[i]=='.')
            output[j] = '!';
        else if(input[i] == '!')
        {
            while(input[i]=='!')
            {
                output[j] = input[i];
                i++;
                j++;
            }
            output[j] = '!';
            j++;
            output[j] = input[i];
        }
        else
        {
            output[j] = input[i];
        } 
    }
    printf("Input: %s \n",input);
    printf("Input: %s",output);
    return 0;
}