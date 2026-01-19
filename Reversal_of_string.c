#include <stdio.h>
#include <string.h>

void reverse(char a[], int beg, int last)
{
    char temp;
    while(beg<last)
    {
        temp = a[beg];
        a[beg] = a[last];
        a[last] = temp;
        beg++;
        last--;
    }
}
void reverse_sent(char a[])
{
    int start=0, end=0;
    while(1)
    {
        if(a[end]==' ' || a[end]=='\0')
        {
            reverse(a,start,end-1);
            start = end+1;
        }
        if(a[end]=='\0')
            break;
        end++;
    }
}
void reverse_string(char a[], int size)
{
    reverse(a, 0, size-1);
    printf("After reversal 1 : %s \n",a);
    reverse_sent(a);
}
int main()
{
    char a[50];
    int size;
    printf("enter string or word \n");
    fgets(a,sizeof(a),stdin);
    size = strlen(a);
    if (a[size-1] == '\n')
    {
        a[size-1] = '\0';
        size--;
    }
    printf("Before reversal: %s \n",a);
    reverse_string(a,size);
    printf("After reversal : %s \n",a);
    return 0;
}