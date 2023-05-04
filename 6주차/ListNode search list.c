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
    p -> link = pre -> link;//������ �߿���.
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
    head = removed->link;//head�� ���� ���� �����Ѵ�. 
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

ListNode*search_list(ListNode*head,element x)
{
	ListNode*p = head;
	
	while(p != NULL){
		if ( p -> data = x) 
		{
			return p;
		}
		p = p->link;
		
	}
	return NULL;
	}





// �׽�Ʈ ���α׷�
int main(void)
{
	ListNode *head = NULL;

	head = insert_first(head, 10);
	print_list(head);
	head = insert_first(head, 20);
	print_list(head);
	head = insert_first(head, 30);
	print_list(head);
	if (search_list(head, 30) != NULL)
		printf("����Ʈ���� 30�� ã�ҽ��ϴ�. \n");
	else
		printf("����Ʈ���� 30�� ã�� ���߽��ϴ�. \n");
	return 0;
}


