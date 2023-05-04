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

ListNode* delete_node(ListNode* head, element value)
{
    ListNode* p = head;
    ListNode* pre = NULL; //직전노드 pre를 null값으로 초기화한다. 

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
            printf("해당 리스트(%d) 삭제 하였습니다.\n", value);
            free(p);
            return head;
        } 
           	pre = p; 
			p = p->link;
    }
    printf("해당값은 리스트에 없습니다.\n");
    return head;
}





// 테스트 프로그램
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

printf("삭제할 값을 입력하시오: ");
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





