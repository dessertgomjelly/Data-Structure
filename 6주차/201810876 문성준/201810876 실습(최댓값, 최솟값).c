#include<stdio.h>
#include<stdlib.h>

typedef int element;

typedef struct ListNode{
    element data;
    struct ListNode *link;
}ListNode;


ListNode* insert_first(ListNode*head, int value)
{
    ListNode *p = (ListNode*)malloc(sizeof(ListNode));

    p -> data = value;
    p -> link = head;
    head = p;

    return head;
}

ListNode* insert(ListNode*head, ListNode*pre,element value)
{
    ListNode *p = (ListNode*)malloc(sizeof(ListNode));

    p -> data = value;
    p -> link = pre -> link;//순서가 중요함.
    pre -> link = p;

    return head;
}

ListNode* delete_first(ListNode*head)
{
    ListNode *removed;
    if(head==NULL)
    {
        return NULL;
    }
    removed = head;
    head = removed->link;//head를 다음 노드로 지정한다. 
    free(removed);

    return head;
}

ListNode* delete_pre(ListNode*head, ListNode*pre)
{
    ListNode*removed;
    removed = pre -> link;
    pre -> link = removed -> link;
    free(removed);
    
    return head;
}

void print_list(ListNode*head)
{
    for(ListNode *p = head; p!= NULL; p = p->link)
    {
        printf("%d->",p->data);
    }
    printf("NULL\n");
}

void MinMaxfromList(ListNode* head)
{
    ListNode* p = head;
    element x = p->data;
    element y = p->data;

    while (p != NULL) {
        if (p->data > x) {
            x = p->data;
        }
        else if (p->data < y) {
            y = p->data;
        }
        p = p->link;
    }
    printf("최댓값 : %d\n", x);
    printf("최솟값 : %d\n", y);
}

// 테스트 프로그램
int main(void)
{

	ListNode* head = NULL;
	head = insert_first(head, 10);
	head = insert_first(head, 13);
	head = insert_first(head, 8);
	head = insert_first(head, 33);
	head = insert_first(head, 21);
	print_list(head);
	MinMaxfromList(head);

return 0;
}


