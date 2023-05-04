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

ListNode* concat_list(ListNode *head1, ListNode *head2)
{
	if(head1 == NULL)
	{
		return head2;
	}
	else if (head2 == NULL)
	{
		return head1;
	}
	else
	{
		ListNode*p;
		p = head1;
		
		while(p->link != NULL)
		{
			p = p->link;
			}
		p->link = head2;
		
		return head1;		
	}
}



// 테스트 프로그램
int main(void)
{
ListNode* head1 = NULL;
ListNode* head2 = NULL;
ListNode* combined_head = NULL;

for (int i = 0; i < 5; i++) {
	head1 = insert_first(head1, i*10);
}
print_list(head1);


for (int i = 0; i < 3; i++) {
	head2 = insert_first(head2, i + 3);
}
print_list(head2);

combined_head = concat_list(head1, head2);
print_list(combined_head);

return 0;
}



