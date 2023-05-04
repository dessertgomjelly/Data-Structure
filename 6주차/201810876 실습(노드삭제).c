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

ListNode* delete_node(ListNode* head, element value)
{
    ListNode* p = head;
    ListNode* pre = NULL; //������� pre�� null������ �ʱ�ȭ�Ѵ�. 

    while (p != NULL) 
    {
        if (p->data == value) 
        {
            if (pre == NULL) 
            {
                head = p->link;
            } 
            else 
            {
            	p = pre -> link; 
                pre -> link = p -> link;
            }
            printf("�ش� ����Ʈ(%d) ���� �Ͽ����ϴ�.\n", value);
            free(p);
            return head;
        } 
           	pre = p; 
			p = p->link;
    }
    printf("�ش簪�� ����Ʈ�� �����ϴ�.\n");
    return head;
}





// �׽�Ʈ ���α׷�
int main(void)
{
ListNode* head = NULL;
element value;
head = insert_first(head, 10);
head = insert_first(head, 13);
head = insert_first(head, 8);
head = insert_first(head, 33);
head = insert_first(head, 21);
print_list(head);

printf("������ ���� �Է��Ͻÿ�: ");
scanf_s("%d", &value);

head = delete_node(head, value);
print_list(head);

ListNode *fr = head;
while (fr != NULL) 
{
    ListNode *next = fr->link;
    free(fr);
    fr = next;
}

return 0;
}





