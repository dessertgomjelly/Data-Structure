#include <stdio.h>

int nCk(int n, int k)
{
	if (n==0 || k==n)
	{
	return 1;
	}
	else
	{
		return nCk(n-1, k-1) + nCk(n-1, k);
	}
}

int main(void)
{ 
	int n, k;
	printf("n값을 입력하세요: ");
	scanf("%d", &n);
	printf("k값을 입력하세요 : "); 
	scanf("%d", &k);
	printf("결과 값은 : %d", nCk(n, k));
	return 0;
}






