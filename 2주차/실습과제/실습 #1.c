#include <stdio.h>
//������ ����ϴ� ��ȯ���� ���α׷��� �ۼ��϶�.
//1 + 1/2 + 1/3+ .....+ 1/n 

double program (float n)
{
	if (n <= 0)
	{
		return 0;
	}
	else if (n > 0)
	{
		return program(n-1) + 1/(n);
	}
}

int main(void)
{
	int n;
	printf("n���� �Է��ϼ��� : ");
	scanf("%d" , &n);
	printf("������� : %lf ", program(n));
}
