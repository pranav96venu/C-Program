#include<stdio.h>
#include<stdlib.h>

struct listnode
{
    int value;
    struct listnode *next;
};
struct listnode *newnode(int value)
{
    struct listnode *node = malloc(sizeof(struct listnode));
    node->value = value;
    node->next = NULL;
    return node;
}
int pushlisttostack(struct listnode *head, int *stack)
{
    int top = -1;
    while(head)
    {
        stack[++top]=head->value;
        head = head->next;
    }
    return top;
}
struct listnode *sumoflist(struct listnode *l1, struct listnode *l2)
{
    struct listnode *result = NULL;
    int stackone[100], stacktwo[100];
    int a = pushlisttostack(l1,stackone);
    int b = pushlisttostack(l2,stacktwo);
    int carry = 0;
    while(a>=0||b>=0||carry>0)
    {
        int sum = carry;
        if(a>=0)
        {
            sum += stackone[a--];
        }
        if(b>=0)
        {
            sum += stacktwo[b--];
        }
        carry = sum/10;
        struct listnode *node = newnode(sum%10);
        node->next = result;
        result = node;
    }
    return result;
}
void printlist(struct listnode *head)
{
    while(head)
    {
        printf("%d",head->value);
        head = head->next;
        if(head!=NULL)
        {
            printf("->");
        }
    }
    printf("\n");
}
int main()
{
    struct listnode *l1 = newnode(3);
    l1->next = newnode(4);
    l1->next->next = newnode(2);
    printf("First list : ");
    printlist(l1);
    struct listnode *l2 = newnode(4);
    l2->next = newnode(6);
    l2->next->next = newnode(5);
    printf("Second List: ");
    printlist(l2);
    struct listnode *result = sumoflist(l1,l2);
    printf("Result list: ");
    printlist(result);
    return 0;
}