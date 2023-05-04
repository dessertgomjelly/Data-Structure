#include<stdio.h>
#include<stdlib.h>

typedef int element;

typedef struct ListNode{
    element data;
    struct ListNode *link;
}ListNode;

ListNode*insert_first(ListNode* head,element data)
{
    ListNode*node = (ListNode*)malloc(sizeof(ListNode));
    node -> data = data;
    if (head == NULL){
        head = node;
        node -> link = head;
    }
    else{
        node->link = head->link;
        head->link = node;
    }
    return head;
}

ListNode*insert_last(ListNode* head,element data)
{
    ListNode*node = (ListNode*)malloc(sizeof(ListNode));
    node -> data = data;
    if (head == NULL){
        head = node;
        node -> link = head;
    }
    else{
        node->link = head->link;
        head->link = node;
        head = node;
    }
    return head;
}

void print_list(ListNode*head)
{
    ListNode*p;

    if
}