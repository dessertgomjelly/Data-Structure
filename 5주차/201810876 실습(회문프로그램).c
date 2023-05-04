#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 100
typedef char element;
typedef struct { // ť Ÿ��
	element  data[MAX_QUEUE_SIZE];
	int  front, rear;
} DequeType;

// ���� �Լ�
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// �ʱ�ȭ 
void init_deque(DequeType *q)
{
	q->front = q->rear = 0;
}
// ���� ���� ���� �Լ�
int is_empty(DequeType *q)
{
	return (q->front == q->rear);
}
// ��ȭ ���� ���� �Լ�
int is_full(DequeType *q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}
// ����ť ��� �Լ�
void deque_print(DequeType *q)
{
	printf("DEQUE(front=%d rear=%d) = ", q->front, q->rear);
	if (!is_empty(q)) {
		int i = q->front;
		do {
			i = (i + 1) % (MAX_QUEUE_SIZE);
			printf("%d | ", q->data[i]);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}
// ���� �Լ�
void add_rear(DequeType *q, element item)        // enqueue(QueueType *q, element item)
{
	if (is_full(q)) {
		error("���� ��ȭ�����Դϴ�");
		return;
	}

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

// ���� �Լ�
element delete_front(DequeType *q)                 // dequeue(QueueType *q)
{
	if (is_empty(q)) {
		error("���� ��������Դϴ�");
		exit(1);
	}

	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}
element get_front(DequeType *q)
{
	if (is_empty(q)) {
		error("���� ��������Դϴ�");
		exit(1);
	}

	return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

element get_rear(DequeType *q)
{
	if (is_empty(q)) {
		error(" ���� ��������Դϴ�");
		exit(1);
	}

	return q->data[q->rear];
}
void add_front(DequeType *q, element val)
{
	if (is_full(q)) {
		error("���� ��ȭ�����Դϴ�");
		return;
	}

	q->data[q->front] = val;
	q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

element delete_rear(DequeType *q)
{
	int prev = q->rear;
	if (is_empty(q)) {
		error("ť�� ��������Դϴ�");
		exit(1);
	}
	q->rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
	return q->data[prev];
}



int main(void)
{
    DequeType queue;
    
    const char* a[4] = {"eye", "madam", "radar","abcde"};
    int i, j;

    
    for (i = 0; i < 4; i++) 
	{
    
        init_deque(&queue);
        int len = strlen(a[i]);
        	
			for (j = 0; j < len; j++) 
			{
            
            add_rear(&queue, a[i][j]);
        	}
        	
			
			for (j = 0; j < len/2; j++) 
			{
            
            char k = delete_front(&queue);
            char l = delete_rear(&queue);
            
        
            if (k != l) 
			{
                printf("%s�� ȸ���� �ƴմϴ�.\n", a[i]);
                break;
            }
            
            else if (j == len/2-1) 
			{
                printf("%s�� ȸ���Դϴ�.\n", a[i]);
                continue;
            }
        }
    }
    
    return 0;
}



