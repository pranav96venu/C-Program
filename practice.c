#include<stdio.h>
#include<stdlib.h>

struct listnode
{
    int value;
    struct listnode *next;
};
struct listnode *newnode(int value)
{
    struct listnode *node = (struct listnode *)malloc(sizeof(struct listnode));
    node->value = value;
    node->next = NULL;
    return node;
}
struct listnode *sumtwo(struct listnode)