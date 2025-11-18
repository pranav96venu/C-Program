/*
    Sum of linked list
*/
#include<stdio.h>
#include<stdlib.h>

// Define Linked List

struct ListNode
{
    int value;
    struct ListNode *Next;
};

// function to create new node

struct ListNode *newnode(int value)
{
    struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
    node->value = value;
    node->Next = NULL;
    return node;
}

// function to add two nodes

struct ListNode *sumofnodes(struct ListNode *l1, struct ListNode *l2)
{
    int carry = 0;
    struct ListNode *Head =NULL, *Tail = NULL;
    while(l1!=NULL || l2!=NULL || carry!=0)
    {
        int sum = carry;
        if(l1!=NULL)
        {
            sum = sum+ l1->value;
            l1 = l1->Next;
        }
        if(l2!=NULL)
        {
            sum = sum + l2->value;
            l2 = l2->Next;
        }
        carry = sum/10;
        int digit = sum%10;
        struct ListNode *Node = newnode(digit);
        if(Head==NULL)
        {
            Head = Node;
            Tail = Node;
        }
        else
        {
            Tail->Next = Node;
            Tail = Node;
        }
    }
    return Head;
}

//function to print the node

struct ListNode *printnode(struct ListNode *l1)
{
    if(l1 == NULL)
    {
        printf("The Node is empty");
    }
    while(l1!=NULL)
    {
        printf("%d",l1->value);
        l1=l1->Next;
        if(l1!=NULL)
            printf("->");
    }
    printf("\n");
}
int main()
{
    struct ListNode *l1 = newnode(2);
    l1->Next = newnode(4);
    l1->Next->Next = newnode(3);
    struct ListNode *l2 = newnode(5);
    l2->Next = newnode(6);
    l2->Next->Next = newnode(4);
    printf("Fist Node: \n");
    printnode(l1);
    printf("Second Node: \n");
    printnode(l2);
    struct ListNode *Result = sumofnodes(l1,l2);
    printf("Sum: \n");
    printnode(Result);
    return 0;
}