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
	printf("n���� �Է��ϼ���: ");
	scanf("%d", &n);
	printf("k���� �Է��ϼ��� : "); 
	scanf("%d", &k);
	printf("��� ���� : %d", nCk(n, k));
	return 0;
}






