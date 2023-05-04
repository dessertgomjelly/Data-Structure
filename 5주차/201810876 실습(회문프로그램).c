#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 100
typedef char element;
typedef struct { // 큐 타입
	element  data[MAX_QUEUE_SIZE];
	int  front, rear;
} DequeType;

// 오류 함수
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// 초기화 
void init_deque(DequeType *q)
{
	q->front = q->rear = 0;
}
// 공백 상태 검출 함수
int is_empty(DequeType *q)
{
	return (q->front == q->rear);
}
// 포화 상태 검출 함수
int is_full(DequeType *q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}
// 원형큐 출력 함수
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
// 삽입 함수
void add_rear(DequeType *q, element item)        // enqueue(QueueType *q, element item)
{
	if (is_full(q)) {
		error("덱이 포화상태입니다");
		return;
	}

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

// 삭제 함수
element delete_front(DequeType *q)                 // dequeue(QueueType *q)
{
	if (is_empty(q)) {
		error("덱이 공백상태입니다");
		exit(1);
	}

	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}
element get_front(DequeType *q)
{
	if (is_empty(q)) {
		error("덱이 공백상태입니다");
		exit(1);
	}

	return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

element get_rear(DequeType *q)
{
	if (is_empty(q)) {
		error(" 덱이 공백상태입니다");
		exit(1);
	}

	return q->data[q->rear];
}
void add_front(DequeType *q, element val)
{
	if (is_full(q)) {
		error("덱이 포화상태입니다");
		return;
	}

	q->data[q->front] = val;
	q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

element delete_rear(DequeType *q)
{
	int prev = q->rear;
	if (is_empty(q)) {
		error("큐가 공백상태입니다");
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
                printf("%s는 회문이 아닙니다.\n", a[i]);
                break;
            }
            
            else if (j == len/2-1) 
			{
                printf("%s는 회문입니다.\n", a[i]);
                continue;
            }
        }
    }
    
    return 0;
}



