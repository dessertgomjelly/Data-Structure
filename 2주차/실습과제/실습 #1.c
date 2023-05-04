#include <stdio.h>
//다음을 계산하는 순환적인 프로그램을 작성하라.
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
	printf("n값을 입력하세요 : ");
	scanf("%d" , &n);
	printf("결과값은 : %lf ", program(n));
}
