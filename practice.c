#include<stdio.h>
struct node *addpos(struct node *start, int data, int pos)
{
    struct node *tmp,*p;
    p = start;
    for(int i=0;i<pos-1 && p!=NULL;i++)
        p=p->link;
    if p == NULL
        printf("position is greater");
    else
    {
        tmp = (struct node*)malloc(sizeof(struct node))
        tmp->info = data;
        p->link = tmp;
        if()
    }
}