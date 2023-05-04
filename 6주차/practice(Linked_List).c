#include<stdio.h>
#include<stdlib.h>

struct NODE{
    struct NODE *next;
    int data;
};

int main(void)
{
    struct NODE *head = malloc(sizeof(struct NODE));

    struct NODE *node1 = malloc(sizeof(struct NODE));
    head->next = node1;
    node1->data = 10;

    struct NODE *node2 = malloc(sizeof(struct NODE));
    node1 -> next = node2;
    node2 -> data = 20;

    return 0;
}
